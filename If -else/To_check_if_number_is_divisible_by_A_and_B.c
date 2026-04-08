#include<stdio.h>

int main(){
    int num,A,B;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);

    if(num % A == 0 && num % B == 0)
        printf("Number is divisible by both A and B");
    else
        printf("Number is not divisible by both A and B");
    return 0;
}
