#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 9
int adj_mat[size][size];
int vis[size];
struct queue{
int arr[size];
int front,rear;
}q;

void enqueue(int x){
if(q.front== -1){
    q.front++;
    q.rear++;
    q.arr[q.front]=x;
}
q.rear++;
q.arr[q.rear]=x;
}

int dequeue(){
    int t;
    t = q.arr[q.front];
    q.front++;
    return t;
}

void bfs(int s){
int p;
enqueue(s);
vis[s]=1;
p=dequeue();
while(p!=0){
    for (int i = 1; i <= size; i++)
    {
        if(adj_mat[p][i]==1 && vis[i]==0){
            enqueue(i);
            vis[i]=1;
        }
    }
    p=dequeue();
    if(p != 0){
        printf("%d",p);
    }

}



}

int main(){
    int i,j,sp,ep,sv;
    int edges,nodes;
    q.front=-1;
    q.rear=-1;
    printf("Enter no. of nodes:");
    scanf("%d",&nodes);
    printf("enter no of edges:");
    scanf("%d",&edges);
    for (i = 1; i <= size; i++)
    {
        for ( j = 1; j <= size; j++)
        {
            adj_mat[i][j]=0;
        }

    }
    for ( i = 0; i < size; i++)
    {
        vis[i]=0;
    }
    for ( i = 0; i < edges; i++)
    {
        printf("enter sp:");
        scanf("%d",&sp);
        printf("enter ep:");
        scanf("%d",&ep);
        adj_mat[sp][ep]=1;
        adj_mat[ep][sp]=1;
    }
    for ( i = 1; i <= nodes; i++)
    {
        for ( j = 1; j <= nodes; j++)
        {
            printf("%d\t",adj_mat[i][j]);
        }
        printf("\n");

    }
    printf("enter sv:");
    scanf("%d",&sv);
    bfs(sv);
    return 0;
}