#include <stdio.h>

int main() {
    int i,j,k;
    int prod[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int a1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int a2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    //creating product array
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                prod[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
    //printing product array
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",prod[i][j]);
            if (j==2) printf("\n");
        }
    }
    return 0;
}
