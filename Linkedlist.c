#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node* head= NULL;
void insert(int x)
{
    struct node*hpptr;
    struct node *pnew;
    pnew=(struct node*) malloc(sizeof(struct node));
    pnew->data=x;
    pnew->next=NULL;
    if(head==NULL)
    {

        head=pnew;
        return;
    }
    if(head->data>x)
    {

        pnew->next=head;
        head=pnew;
        return;
    }
    hpptr=head;
    while(hpptr->next!=NULL && hpptr->next->data>x){
        hpptr=hpptr->next;
        pnew->next=hpptr->next;}
        hpptr->next=pnew;
        return;

}
void display(){
    struct node * hhptr;
    hhptr = head;
    while (hhptr != NULL)
    {
        printf("boh");
        printf("%d\n",hhptr->data);
        hhptr=hhptr->next;
    }
    return;
}
void delete(int x){
    struct node * temp;
    struct node * hpptr;
    if(head == NULL){
        printf("List empty");
        return;
    }
    if(head ->data == x){
        temp=head;
        head= head->next;
        free(temp);
        return;
    }
    hpptr=head;
    while(hpptr->next != NULL && hpptr->next->data != x)
    {hpptr=hpptr->next;}
    if(hpptr->next == NULL){
    printf("value not present");
    }
    temp=hpptr->next;
    hpptr->next=temp->next;
}



int main(){
    insert(2);
    insert(100);
    insert(30);
    insert(90);
    insert(70);
    display();
    delete(100);
    display();

    return 0;
}