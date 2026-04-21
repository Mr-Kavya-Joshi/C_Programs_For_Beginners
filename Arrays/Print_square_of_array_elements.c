#include<stdio.h>
int main(){
  int i;  
  int arr[]={2,22,7,4,6,9,34};
  printf("The square of array elements is :\n");
  for(i=6;i>=0;i--)
    printf("%d ",arr[i]*arr[i]);
  return 0;
}
