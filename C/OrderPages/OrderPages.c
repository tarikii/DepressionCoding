#include <stdio.h>
#include <stdlib.h>

int main() {
    // Number of pages in total
    int totalPages = 0;
    // Index to int, so that we can save the numbers of pages
    int *numberPage;
    // Index to array of chars, so that we can save the content of each page
    char (*contentPage)[100];

    // We ask the user for the total number of pages
    printf("Total of pages: ");
    scanf("%d", &totalPages);

    // We assign the memory of what the user put in each variable int
    numberPage = (int *) malloc(totalPages * sizeof(int));
    contentPage = (char (*)[100]) malloc(totalPages * sizeof(char[100]));

    printf("Paste the entire content with ctrl+C/ctrl+V of the pages and we'll sort it for you :3\n");
    // First, we add the information on both arrays, with the help of a loop
    for (int i = 0; i < totalPages; i++) {
        scanf("%d", &numberPage[i]);
        scanf(" %[^\n]", contentPage[i]);
    }

    // Then, we make 2 loops, one basically to count from 1 to the last page
    for (int i = 0; i < totalPages; i++) {
        int num = i + 1;
        //This one is to see, if both, the number we created for counting and the number of the array is the same
        for (int j = 0; j < totalPages; j++) {
            //Then, we print it, with this we can sort the content of the total pages
            if (num == numberPage[j]) {
                printf("%d %s\n", numberPage[j], contentPage[j]);
            }
        }
    }

    // To make a good practice while coding, we are gonna free both, the number of pages and the content from the memory
    free(numberPage);
    free(contentPage);

    return 0;
}