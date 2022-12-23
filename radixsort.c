#include<stdio.h>
void countingSort(int arr[], int n, int place) {
  int output[n + 1];
  int max = (arr[0] / place) % 10;

  for (int i = 1; i < n; i++) {
    if (((arr[i] / place) % 10) > max)
      max = arr[i];
  }
  int count[max + 1];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  for (int i = 0; i < n; i++)
    count[(arr[i] / place) % 10]++;

  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  for (int i = n - 1; i >= 0; i--) {
    output[count[(arr[i] / place) % 10] - 1] = arr[i];
    count[(arr[i] / place) % 10]--;
  }
 for (int i = 0; i < n; i++)
    arr[i] = output[i];
}

int getmax(int arr[],int n){
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
return max;
}

void radix(int arr[],int n){
int place;
int max;
max=getmax(arr,n);
for ( place = 1; max/place>0; place*=10)
{
 countingSort(arr,n,place);
}

}
void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}
int main(){

    int arr[]={10,66,55,77,88};
    int n = sizeof(arr) / sizeof(arr[0]);
    radix(arr,n);
    printArray(arr,n);

    return 0;
}