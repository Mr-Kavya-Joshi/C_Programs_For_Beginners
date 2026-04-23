#include<stdio.h>
#include<math.h>
int main(){
  int N;
  int sum=0;
  printf("enter the value of N: ");
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    sum+= i*pow(-1,i+1);
  }
  printf("The sum is: %d",sum);
  return 0;
}
