#include <stdio.h>

int main() {
    //Declaration of variables, in C, there is no such thing as String, it's an array of chars.
    char name[100];
    int age = 0;
    char levelStudy[100];
    int yearsExperience = 0;
    char cuisineType[100];

    // We ask the user for an input of the name
    printf("Enter your name: ");
    // We read the input with fgets() and store it in 'name'
    fgets(name, sizeof(name), stdin);
    // Eliminate the final next line of 'name' with %[^\n]
    sscanf(name, "%[^\n]", name);

    // We ask the user for his age
    printf("Enter your age: ");
    // We read what the user puts
    scanf("%d", &age);
    // We get each character of the input
    getchar();

    // Until here, is all basically the same
    printf("Enter your educational level: ");
    fgets(levelStudy, sizeof(levelStudy), stdin);
    sscanf(levelStudy, "%[^\n]", levelStudy);

    printf("Enter the number of years of experience: ");
    scanf("%d", &yearsExperience);
    getchar();

    printf("Enter the type of cuisine: ");
    fgets(cuisineType, sizeof(cuisineType), stdin);
    sscanf(cuisineType, "%[^\n]", cuisineType);

    // We finally print that the form is completed, putting the name and the type of cuisine.
    printf("The form for %s has been completed. We will contact you if we need a chef in the %s cuisine.\n", name, cuisineType);

    return 0;
}