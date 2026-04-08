#include<stdio.h>

int main(){
    float temp, new;
    int choice;

    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if(choice == 1)
        new = (temp - 32) * 5 / 9;
    else if(choice == 2)
        new = (temp * 9 / 5) + 32;
    else
        printf("Invalid choice");
    

    printf("Temperature after conversion = %f", new);
    return 0;
}
