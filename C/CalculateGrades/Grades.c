#include <stdio.h>
#include <string.h>

int main(){
    float grade = 0;
    char result[100];

    printf("What was your grade overall this year?\n");
    scanf("%f", &grade);

    if(grade < 5.00){
        // strcpy makes us copy one string to another, taking first the destination of the copy and the source
        strcpy(result, "INSUFICIENT");
    }

    else if(grade >= 5.00 && grade < 6.00){
        strcpy(result, "SUFICIENT");
    }

    else if(grade >= 6.00 && grade < 7.00){
        strcpy(result, "BE");
    }

    else if(grade >= 7.00 && grade < 8.50){
        strcpy(result, "NOTABLE");
    }

    else if(grade >= 8.50 && grade < 9.99){
        strcpy(result, "EXCEL.LENT");
    }

    else if(grade == 10){
        strcpy(result, "MATRICULA");
    }


    if(grade < 5.00){
        printf("Sorry, but your result is %s, you didn't pass :(\n", result);
    }
    else{
        printf("Congratulations! You passed with a %s result, good job :D\n", result);
    }

    return 0;
}