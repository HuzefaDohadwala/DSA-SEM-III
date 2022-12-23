#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node*head=NULL;
void display(){
    struct node* temp;
    if(head == NULL){
        printf("list is empty");
        return;
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void insert(){
    int x;
    printf("enter value:");
    scanf("%d",&x);
    struct node* hpptr;
    struct node* prev;
    struct node* pnew;
    pnew=(struct node*)malloc(sizeof(struct node));
    pnew->data=x;
    pnew->next=NULL;
    pnew->prev=NULL;
    if(head== NULL){
        head=pnew;
        return;
    }
    if(head->data>x){
        pnew->next=head;
        head->prev=pnew;
        head=pnew;
        return;
    }
    hpptr=head;
    while (hpptr->next != NULL && hpptr->next->data < x)
    {
        hpptr=hpptr->next;
    pnew->next=hpptr->next;
    }

        if(hpptr->next != NULL){
            hpptr->next->prev=pnew;
        }
    hpptr->next=pnew;
    pnew->prev=hpptr;
    return;

}

void delete(int x){
    struct node* temp;
    struct node* hpptr;
    if(head->data == x){
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
    hpptr=head;
    while(hpptr->next != NULL  && hpptr->next->data!=x){
        hpptr=hpptr->next;
    }
    if(hpptr->next == NULL){
        printf("element not found");
    }
    temp=hpptr->next;
    hpptr->next=temp->next;
    temp->next->prev=hpptr;
    free(temp);
}
int main (){
    insert();
    insert();
    insert();
    insert();
    display();
    printf("\n");
    delete(20);
    printf("\n");
    display();
printf("\n");
    insert();
    display();




    return 0;
}