#include<stdio.h>

int main(){
    float cp, sp;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if(sp > cp)
        printf("You have gained profit of %f", sp-cp);
    else if(cp>sp)
        printf("You have incurred loss of %f", cp-sp);
    else
        printf("No Profit No Loss");

    return 0;
}

