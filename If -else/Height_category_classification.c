#include<stdio.h>

int main(){
    float h;

    printf("Enter your height in cm: ");
    scanf("%f", &h);

    if(h < 150)
        printf("Dwarf");
    else if(h >= 150 && h <= 180)
        printf("Average height");
    else
        printf("Taller");

    return 0;
}
