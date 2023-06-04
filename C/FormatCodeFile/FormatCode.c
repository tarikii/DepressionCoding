#include <stdio.h>

int main() {
    //We create all the char arrays, for each word
    char file1[100], file2[100], file3[100], file4[100], file5[100];
    char file6[100], file7[100], file8[100], file9[100], file10[100];
    char file11[100], file12[100];

    // We scan each word of each line, if the word has more than the 3 usual words, we read the entire line in that specific line
    scanf("%s", file1);
    scanf("%s", file2);
    scanf("%s", file3);
    scanf("%s", file4);
    scanf("%s", file5);
    scanf("%s", file6);
    scanf("%s", file7);
    scanf("%s", file8);
    // Reads all the line until he encounters a \n, including the blank spaces.
    scanf(" %[^\n]s", file9);
    scanf("%s", file10);
    scanf("%s", file11);
    scanf("%s", file12);
    printf("\n");

    // We print the words in order
    printf("%s %s %s\n", file11, file12, file10);
    printf("%s %s %s\n", file8, file9, file7);
    printf("%s %s %s\n", file5, file6, file4);
    printf("%s %s %s\n", file2, file3, file1);

    return 0;
}