#include <stdio.h>

int main(){
    int times = 0;

    printf("How many times do you want to print points?\n");
    scanf("%d", &times);

    for(int i = 0; i < times; i++){
        printf(".");
    }

    return 0;
}