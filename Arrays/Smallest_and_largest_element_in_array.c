#include<stdio.h>
#include<limits.h>
int main(){
  int min,max,i;
  min=INT_MAX;
  max=INT_MIN;
  int arr[]={2,7,4,6,9,34};
   for(i=0;i<6;i++){
    if(arr[i]<min) min=arr[i];
  }
   for(i=0;i<6;i++){
    if(arr[i]>max) max=arr[i];
  }
  printf("The minimum element is %d\n",min);
  printf("The maximum element is %d",max);
  return 0;
}
