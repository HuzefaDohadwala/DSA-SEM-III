#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 4
struct queue{
    int fornt,rear;
    int a[size];
}q;

void enqueue(int x){
if((q.fornt-1==q.rear) || (q.fornt==0 && q.rear == size-1))
{
    printf("queue overflow");
    return;
}
if(q.fornt== -1){
q.fornt++;
q.rear++;
q.a[q.fornt]=x;
}
else{
    q.rear++;
    q.a[q.rear]=x;
}
}

void dequeue(){
    if(q.fornt == -1)
    {
        printf("underflow");
    }
    if(q.fornt == q.rear){
        q.fornt=-1;
        q.rear=-1;
        return;
    }
    q.fornt++;
}
void display(){
    for(int i=q.fornt;i<= q.rear;i++){
        printf("%d",q.a[i]);
    }

}




int main(){
    q.fornt=-1;
    q.rear=-1;
    int opt;
    int x;
    do{
        scanf("%d",&opt);
    switch (opt)
    {
    case 1 :
    printf("enter ele:");
    scanf("%d",&x);
        enqueue(x);
        break;
    case 2 :
        dequeue();
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