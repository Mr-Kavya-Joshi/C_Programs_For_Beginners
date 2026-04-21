#include<stdio.h>
int main(){
  int find;
  int num;
  printf("Enter the number you want to find : ");
  scanf("%d",&num);
  int i;  
  int arr[]={2,2,2,7,4,6,9,34};
  for(i=0;i<6;i++){
    if(arr[i]==num) 
      printf("Yes, it is present in the array!");
    else 
      printf("No, it is not present in the array.");
    break;
   }
  return 0;
}
