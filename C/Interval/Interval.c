#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Put 2 numbers and we will show you the interval of these numbers (excluding the last): ");
    scanf("%d %d", &num1, &num2);

    for(int i = num1; i < num2; i++){
        printf("%d", i);
    }

    return 0;
}