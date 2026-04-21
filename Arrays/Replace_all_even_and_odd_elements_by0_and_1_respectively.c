#include<stdio.h>
#include<limits.h>
int main(){
  int i;  
  int arr[]={2,7,4,6,9,34};
   for(i=0;i<6;i++){
    if(arr[i]%2==0) arr[i]=0;
    else arr[i]=1;
  }
  for(i=0;i<6;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
