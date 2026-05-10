#include <stdio.h>

int main() {
    char *ptr="Programming";
    for(int i=0;i<11;i++){
        printf("%c\n",*(ptr+i));
    }
    return 0;
}
