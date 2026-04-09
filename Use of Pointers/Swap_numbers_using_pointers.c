#include <stdio.h>

int main() {
    int a =40;
    int b = 50;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int t;
    printf("Original numbers : %d , %d\n",*ptr1,*ptr2);
    t=*ptr2;
    *ptr2=*ptr1;
    *ptr1=t;
    printf("Swapped numbers : %d , %d",*ptr1,*ptr2);
    
    return 0;
}
