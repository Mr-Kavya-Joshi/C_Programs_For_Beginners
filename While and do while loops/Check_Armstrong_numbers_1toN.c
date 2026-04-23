//Armstrong number is a number for which the sum of cubes of the digits equals the number itself.
#include<stdio.h>
#include<math.h>
int main(){
  int N,temp;
  int sum;
  printf("Enter the value of N");
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    temp=i;
    sum=0;
    while(temp!=0){
       sum+=pow(temp%10,3);
       temp/=10;
    }
    if (sum==i) printf("%d ",i);
  }
  return 0;
}
