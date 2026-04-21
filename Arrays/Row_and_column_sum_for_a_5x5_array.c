#include<stdio.h>
int main(){
  int i,j;
  int arr[5][5]={
    {1,2,3,4,5},
    {1,3,4,5,6},
    {2,5,2,4,23},
    {1,5,2,6,7},
    {2,6,2,4,5}
  };
  // Row sum
  int rsum[5]={0,0,0,0,0};
  int colsum[5]={0,0,0,0,0};
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      rsum[i]+=arr[i][j];
    }
  }
  for(j=0;j<5;j++){
    for(i=0;i<5;i++){
      colsum[j]+=arr[i][j];
    }
  }
  printf("The row wise sum is ");
  for(i=0;i<5;i++){
    printf("%d ",rsum[i]);
  }
  printf("\n");
  printf("The column wise sum is ");
  for(j=0;j<5;j++){
    printf("%d ",colsum[j]);
  }
  return 0;
}
