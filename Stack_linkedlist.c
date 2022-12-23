#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node * top=NULL;
void insert(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    if(top == NULL)
    {
        newnode->next=NULL;
    }
    else
    {
    newnode->next=top;
    }
    top=newnode;
}

void delete(){
struct node*temp;
if(top == NULL){
    printf("underflow");
}
temp=top;
top=top->next;
free(temp);
}

void display(){
    if (top == NULL) {
        printf("\nStack Underflow\n");
    }
    struct node * temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
  //  printf("%d\t",temp->data);
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



