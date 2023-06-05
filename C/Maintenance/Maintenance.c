#include <stdio.h>

int main(){
    int daysMaintenance = 0;
    int hoursWork = 0;
    int hoursMachineWork = 0;
    int totalMaintenance = 0;
    int totalDaysMaintenance = 0;

    printf("How many days of maintenance have we done?\n");
    scanf("%d", &daysMaintenance);

    for(int i = 0; i < daysMaintenance; i++){
        printf("How many hours of work we got in day %d\n", (i+1));
        scanf("%d", &hoursWork);
        
        printf("How many hours did the machine work in day %d\n", (i+1));
        scanf("%d", &hoursMachineWork);

        if(!(hoursWork == hoursMachineWork)){
            totalMaintenance += hoursWork - hoursMachineWork;
            totalDaysMaintenance++;
        }
    }

    printf("We had maintenance in %d days totally.\n", totalDaysMaintenance);
    printf("We had the machine in %d hours totally of maintenance.\n", totalMaintenance);

    return 0;
}