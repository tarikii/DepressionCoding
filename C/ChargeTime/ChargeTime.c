#include <stdio.h>

int main(){
    // The velocity charge in KB/s
    int chargeVelocity = 0;
    // The size of the file in MB
    int sizeFile = 0;
    // The size of the file transformed in KB
    int sizeFileKB = 0;
    // The total seconds of the download
    int seconds = 0;

    // We ask the inputs to the user
    printf("How many KB/s is charging?\n");
    scanf("%d", &chargeVelocity);

    printf("How many MB does the file weights?\n");
    scanf("%d", &sizeFile);
    printf("\n");

    // We calculate the total KB with the MB size mul by 1024KB that it weights 1 MB
    sizeFileKB = sizeFile * 1024;

    // We calculate the seconds using a div between sizeFileMB and chargeVelocity
    seconds = sizeFileKB / chargeVelocity;

    // We print the result to the user
    printf("The total to download this file are %d seconds.\n",seconds);

    return 0;
}