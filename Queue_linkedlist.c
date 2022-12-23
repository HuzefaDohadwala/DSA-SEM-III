#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
    struct node * front;
    struct node * rear;
void insert(){
    int x;
    printf("enter value");
    scanf("%d",&x);
    struct node * ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    if(front == NULL)
    {
        front=ptr;
        rear=ptr;
        front->next=NULL;
        rear->next=NULL;
    }
    else{

        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;
    }

}

void delete(){
    struct node* ptr;
    if(front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else{
    ptr=front;
    front=front->next;
    free(ptr);
}}

void display(){
    struct node * temp;
    temp=front;
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp=temp->next;

    }
}
int main(){
    int opt;
    do{
        scanf("%d",&opt);
    switch (opt)
    {
    case 1 :
        insert();
        break;
    case 2 :
        delete();
        break;
    case 3 :
        display();
        break;
    case 4:
        exit(0);
        break;
    }}
    while(opt != 4);
    return 0;
}
