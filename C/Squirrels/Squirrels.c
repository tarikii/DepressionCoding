#include <stdio.h>

int main(){
    // Squirrels and walnuts intialized
    int squirrels = 0;
    int walnuts = 0;
    int walnutsLeft = 0;

    printf("How many squirrels are going to share?\n");
    scanf("%d", &squirrels);
    printf("\n");

    printf("How many walnuts have the squirrels encountered?\n");
    scanf("%d", &walnuts);
    printf("\n");

    walnutsLeft = walnuts % squirrels;

    printf("The squirrels finally share the walnuts, and they got left %d walnuts", walnutsLeft);

    return 0;
}