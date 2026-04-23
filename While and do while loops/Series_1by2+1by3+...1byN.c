//series 1/2 + 1/3 + 1/4 + ... + 1/N
#include<stdio.h>
int main(){
  int N;
  float sum=0;
  printf("enter the value of N: ");
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    sum+=1.0/i;
  }
  printf("The sum is: %f",sum);
  return 0;
}
