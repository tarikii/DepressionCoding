#include <stdio.h>
#include <stdbool.h>

int main() {
    // We are gonna represent the lights with int, because in C we cant print a true or a false as a bool
    // in C 1 is true, and 0 is false
    int firstLight = 0;
    int secondLight = 0;
    int thirdLight = 0;
    int fourthLight = 0;
    // The last result tho, we can make it boolean and compare all the ints, if they are all 0
    // we can say that the total is true, while if only one light is 1, it's going to be false
    bool totalLights = false;

    printf("Put the state of the first light (0 for false, 1 for true): ");
    scanf("%d", &firstLight);
    printf("Put the state of the second light (0 for false, 1 for true): ");
    scanf("%d", &secondLight);
    printf("Put the state of the third light (0 for false, 1 for true): ");
    scanf("%d", &thirdLight);
    printf("Put the state of the fourth light (0 for false, 1 for true): ");
    scanf("%d", &fourthLight);

    // We do the comparision, and give the result bool to the var 'totalLights'
    totalLights = !(firstLight || secondLight) &&  !(thirdLight || fourthLight);

    // Then we just make a ternary operator, where if the result of totalLights is true, we print true, if not
    // we print false (If you just wanna do it like the C logic, and print 1 for true or 0 for false, you can)
    printf("%s\n", totalLights ? "true" : "false");

    return 0;
}