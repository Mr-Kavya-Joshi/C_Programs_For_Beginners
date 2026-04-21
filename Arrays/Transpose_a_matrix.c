#include<stdio.h>
int main(){
    int i,j;
    int arr[3][3]={
        {1,2,3},
        {6,4,7},
        {3,8,2}
    };
    int transp[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            transp[i][j]=arr[j][i];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",transp[i][j]);
            if(j==2) printf("\n");
        }
    }
    return 0;
}
