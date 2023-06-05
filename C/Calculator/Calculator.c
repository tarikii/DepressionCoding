#include <stdio.h>

int main(){
    printf("MENU:\n1.-SUM\n2.-SUBTRACT\n3.-MULTIPLY\n4.-DIVISION\n");

    int number1 = 0;
    int number2 = 0;
    int option = 0;
    int result = 0;

    printf("Pick 2 numbers, and then one option of the menu (example: 5 1 4): ");
    scanf("%d %d %d", &number1, &number2, &option);

    if(option == 1){
        result = number1+number2;
    }

    else if(option == 2){
        result = number1 - number2;
    }

    else if(option == 3){
        result = number1 * number2;
    }

    else if(option == 4){
        result = number1 / number2;
    }

    printf("The result of the operation is %d.", result);

    return 0;
}