#include<stdio.h>

int main(){
    float yourMarks, totalMarks;

    printf("Enter the marks you scored: ");
    scanf("%f", &yourMarks);

    printf("Enter the total marks: ");
    scanf("%f", &totalMarks);

    float percent = yourMarks * 100 / totalMarks;

    printf("Your percentage is : %f\n", percent);

    if(percent >= 75.0)
        printf("You have got a distinction.");
    else if(percent >= 60.0)
        printf("You have got first division.");
    else if(percent >= 50.0)
        printf("You have got second division.");
    else if(percent >= 40.0)
        printf("You have got third division.");
    else
        printf("You have failed!");

    return 0;
}
