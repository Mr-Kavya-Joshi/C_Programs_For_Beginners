#include <stdio.h>
#include<stdlib.h>
int main() {
    int i,j,k;
    for(i=0;i<=3;i++){
        for(k=1;k<=3-i;k++) printf("  ");
        for (j=-i;j<=i;j++){
            printf("%d ",abs(j));
        }
        printf("\n");
    }
}
