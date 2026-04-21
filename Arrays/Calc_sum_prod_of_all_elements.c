#include<stdio.h>
int main(){
  int sum=0;
  int prod=1;
  int arr[]={1,2,3,4,5};
  int i=0;
  //sum of elements
  for(i=0;i<5;i++){
    sum+=arr[i];
  }
  printf("The sum is : %d\n",sum);
  //product of elements
  for(i=0;i<5;i++){
    prod*=arr[i];
  }
  printf("The product is : %d",prod);
  return 0;
}
