#include <stdio.h>
#include <stdbool.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    bool isSort = false;

    printf("Type the 3 numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    isSort = num1 < num2 && num2 < num3;

    printf("%s",isSort ? "true" : "false");

    return 0;
}