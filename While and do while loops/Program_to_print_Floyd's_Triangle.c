#include<stdio.h>
int main(){
  int N,val=0;
  printf("Enter the height of the triangle");
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    for(int j=0;j<=i;j++){
      val+=1;
      printf("%d ",val);
    }
    printf("\n");
  }
  return 0;
}
