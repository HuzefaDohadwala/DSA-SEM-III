#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void insertionsort(int n){
int i , j=0 , temp;
int arr[5];
for(int k=0;k<n;k++){
    scanf("%d",&arr[k]);
}
for (i = 0; i < n; i++)
{
 j=i-1;
temp=arr[i];
while(temp<arr[j] && j>=0){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1] = temp;
}
for(i =0 ; i<5 ; i++){
        printf("%d \t",arr[i]);
    }

}

int main(){
    int n=5;

    insertionsort(n);

    return 0;
}