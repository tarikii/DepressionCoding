#include <stdio.h>

int main(){
    int busFirstCompany = 0;
    int busSecondCompany = 0;
    int capacityBus = 0;
    int totalBuses = 0;
    int totalCapacity = 0;

    printf("How many buses are in the first company?\n");
    scanf("%d", &busFirstCompany);
    getchar();

    printf("How many buses are in the second company?\n");
    scanf("%d", &busSecondCompany);
    getchar();

    printf("How many people can be inside the bus?\n");
    scanf("%d", &capacityBus);
    getchar();

    // Pretty simple, we get the totalBuses by doing a sum on each company buses
    totalBuses = busFirstCompany + busSecondCompany;

    // We then, get the result of the total buses and mul by the capacity of the buses
    totalCapacity = totalBuses * capacityBus;

    printf("The total people that can do the trip is %d people", totalCapacity);

    return 0;
}