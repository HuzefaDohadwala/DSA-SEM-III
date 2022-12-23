#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void swap(int *xp, int *yp){
   int temp= *xp;
   *xp = *yp;
   *yp = temp;
}
void selectionsort(int arr[],int n){
int i,j,min;
for(i=0;i<n-1;i++){
    min=i;
    for(j=i+1;j<n;j++)
        if (arr[j] < arr[min])
		min = j;
        if(min != i)
	swap(&arr[min], &arr[i]);

}
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main(){

    int arr[5];
    int n = 5;
    for(int k=0;k<n;k++){
    scanf("%d",&arr[k]);
}

    selectionsort(arr,n);
    printArray(arr, n);

    return 0;
}