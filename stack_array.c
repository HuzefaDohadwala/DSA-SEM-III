#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define SIZE 5
struct stack{
    int top;
    int list[SIZE];
}s1;
void insert(){
    int x;
    printf("enter a value:");
    scanf("%d",&x);
    if(s1.top == SIZE-1)
    {
      printf("OVERFLOW");
      return;
    }
    else
    {
        s1.top++;
        s1.list[s1.top]=x;
        printf("Value inserted");
    }
}

void delete(){
    if(s1.top == -1)
    {
        printf("UNDERFLOW");
        return;
    }
    else
    {
        s1.top --;
    }
}

void display(){
    if(s1.top == -1)
    {
        printf("UNDERFLOW");
        return;
    }
    for (int i = s1.top; i >=0 ; i--)
    {
        printf("%d\n",s1.list[i]);
    }

}
int main(){
    s1.top= -1;
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
