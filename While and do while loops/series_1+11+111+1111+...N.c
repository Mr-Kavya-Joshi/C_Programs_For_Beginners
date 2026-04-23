#include<stdio.h>
#include<math.h>
int main(){
  int N;
  int sum=0;
  int newnum=0;
  printf("enter the value of N: ");
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    newnum+=pow(10,i);
    sum+=newnum;
  }
  printf("The sum is: %d",sum);
  return 0;
}
