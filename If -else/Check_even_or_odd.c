#include<stdio.h>
int main(){
    int num1;
    printf("Enter the number:\n");
    scanf("%d",&num1);
    printf("The number is ");
    
      if(num1%2==0) printf("even");
      else printf("odd");
    
    return 0;
}
