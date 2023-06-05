#include <stdio.h>

int main(){
    char instruction;
    int x = 0;
    int y = 0;
    
    printf("Instructions: N (Go up), S (Go down), E (Go Right), W (Go Left).");
    printf("Put the instructions that you want to do, if you put '.', the robot will power off: ");

    while (instruction != '.'){

        scanf("%c", &instruction);

        switch (instruction){
        case 'N':
            y += 1;
            break;
        case 'S':
            y -= 1;
            break;
        case 'E':
            x += 1;
            break;
        case 'W':
            x -= 1;
            break;
        default:
            break;
        }
    }

    printf("Final position ({x, y}): {%d, %d}.", x, y);
    

    return 0;
}