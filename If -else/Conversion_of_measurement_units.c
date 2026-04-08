#include<stdio.h>

int main(){
    float km;

    printf("Enter distance between cities in kilometers: ");
    scanf("%f", &km);
    printf("This is equivalent to :\n");
    printf("%f Meters \n", km * 1000);
    printf("%f Centimeters \n", km * 100000);
    printf("%f Feet \n", km * 3280.84);
    printf("%f Inches \n", km * 39370.1);

    return 0;
}
