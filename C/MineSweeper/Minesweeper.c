#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int option = 0;
    int rows = 0;
    int columns = 0;
    int mines = 0;
    int hiddenBoxes = 0;
    int shownBoxes = 0;
    bool exit = false;
    char **board;
    char **hiddenBoard;
    int optionPlay = 0;
    int row = 0;
    int column = 0;
    int minesSurrounded = 0;

    
    while (!exit){
        printf("Pick an option: \n");
        printf("    1. Fill the board\n");
        printf("    2. Show the board\n");
        printf("    3. Show statistics\n");
        printf("    4. Play\n");
        printf("    5. Exit.\n");

        scanf("%d", &option);

        switch (option){
        case 1:
            printf("How many rows do you want in the board?\n");
            scanf("%d", &rows);

            printf("How many columns do you want in the board?\n");
            scanf("%d", &columns);

            printf("How many mines are in the board?\n");
            scanf("%d", &mines);

            if(mines >= rows*columns){
                printf("YOU STILL DIDN'T CREATE ANY BOARD!\n");
            }

            else{

                board = malloc(rows * sizeof(char*));
                hiddenBoard = malloc(rows * sizeof(char*));

                for(int i = 0; i < rows; i++){
                    board[i] = malloc(columns * sizeof(char));

                    for(int j = 0; j < columns; j++){
                        board[i][j] = ' ';
                    }
                }

                for(int i = 0; i < rows; i++){
                    hiddenBoard[i] = malloc(columns * sizeof(char));

                    for(int j = 0; j < columns; j++){
                        hiddenBoard[i][j] = '?';
                    }
                }

                for(int i = 0; i < mines; i++){
                    int randomRow = rand() % rows;
                    int randomColumn = rand() % columns;

                    if(board[randomRow][randomColumn] == ' '){
                        board[randomRow][randomColumn] = 'O';
                    }
                    else{
                        i--;
                    }
                }

                hiddenBoxes = rows*columns;
            }

            break;

        case 2:
            if(rows == 0 && columns == 0){
                printf("YOU STILL DIDN'T CREATE ANY BOARD!\n");
            }

            else{

                for(int i = 0; i < rows; i++){
                    for(int j = 0; j < columns; j++){
                        printf("[%c]", hiddenBoard[i][j]);
                    }
                    printf("\n");
                }
            }

            break;

        case 3:
            printf("Board size: %dx%d\n", rows, columns);
            printf("Boxes in total: %d\n", rows*columns);
            printf("Hidden boxes: %d\n", hiddenBoxes);
            printf("Shown boxes: %d\n", shownBoxes);
            printf("Quantity of mines: %d\n", mines);
            break;

        case 4:
            printf("    1. Consult a box\n");
            printf("    2. Uncover a box\n");

            scanf("%d", &optionPlay);

            if(rows == 0 && columns == 0){
                printf("YOU DIDN'T CREATE ANY BOARD YET!\n");
            }
            else{
                if(optionPlay == 1){
                    printf("What row do you want to consult? (Start from 0)\n");
                    scanf("%d", &row);

                    printf("What column do you want to uncover? (Start from 0)\n");
                    scanf("%d", &column);
                    
                    if(row >= 0 && column >= 0 && row < rows && column < columns){
                        
                        if(row - 1 >= 0){
                            if(board[row - 1][column] == 'O') minesSurrounded++;
                        }

                        if(column - 1 >= 0){
                            if(board[row][column - 1] == 'O') minesSurrounded++;
                        }

                        if(row - 1 >= 0 && column - 1 >= 0){
                            if(board[row - 1][column - 1] == 'O') minesSurrounded++;
                        }

                        if(row + 1 < rows){
                            if(board[row + 1][column] == 'O') minesSurrounded++;
                        }

                        if(column + 1 < columns){
                            if(board[row][column + 1] == 'O') minesSurrounded++;
                        }

                        if(row + 1 < rows && column + 1 < columns){
                            if(board[row + 1][column + 1] == 'O') minesSurrounded++;
                        }

                        if(row + 1 < rows && column - 1 >= 0){
                            if(board[row + 1][column - 1] == 'O') minesSurrounded++;
                        }

                        if(row - 1 >= 0 && column + 1 < columns){
                            if(board[row - 1][column + 1] == 'O') minesSurrounded++;
                        }

                        hiddenBoard[row][column] = minesSurrounded + '0';
                    }
                }
                
                else if(optionPlay == 2){
                    printf("What row do you want to uncover? (Start from 0)\n");
                    scanf("%d", &row);

                    printf("What column do you want to uncover? (Start from 0)\n");
                    scanf("%d", &column);

                    if(row >= 0 && column >= 0 && row < rows && column < columns){
                        if(board[row][column] == ' '){
                        hiddenBoard[row][column] = ' ';
                        shownBoxes++;
                        hiddenBoxes--;
                        if(mines == hiddenBoxes){
                            printf("YOU WIN!\n");
                            exit = true;
                            }
                        }

                        else if(board[row][column] == 'O'){
                            hiddenBoard[row][column] = 'X';
                            printf("GAME OVER!\n");

                            for(int i = 0; i < rows; i++){
                                for(int j = 0; j < columns; j++){
                                    printf("[%c]", hiddenBoard[i][j]);
                                }
                                printf("\n");
                            }
                            exit = true;
                        }
                    }
                }
            }

            break;

        case 5:
            printf("See you next time! <3\n");
            exit = true;
            break;
        
        default:
            break;
        }
    }
    


    return 0;
}