#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 10
#define M 10
#define NUM_DIRECTIONS 4

int main()
{
    int i, j, k = 0, movement;
    char matx[N][N];
    char ch, letter;
    char letters[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};



    /* Populating The Matrix With Dots */
    for(i = 0 ; i < N ; i++) {
        for(j = 0 ; j < N ; j++) {
            matx[j][i] = '.';
            printf("%c", matx[j][i]);
        }
        printf("\n");
    }
    /* End of Populating The Matrix */

    // Directions UP & DOWN = First Bracket || Left & Right = Second Bracket


/**************/
/* Initializing The Random Walk */
    printf("\n\n\nPress x to start The Random Walk: \n");
    while(ch!='x') {
        ch = getchar();
    }

    for(i = 0 ; i < N ; i++) {
        for(j = 0 ; j < N ; j++) {
            if(ch == 'x') {
                if(i == 0 && j == 0) {
                    matx[j][i] = letters[0];
                } else {
                    /* Bug Here - Same Random Number Repeated every time*/
                    srand((unsigned)time(NULL));
                    movement = rand() % NUM_DIRECTIONS;
                    printf("%d\n", movement);
                    if(k < 28) {
                        k++;
                        //Validating Boundries
                        if(movement == 0 && i > 0) {
                            //printf("Movement = %d", movement);
                            matx[j][i-1] = letters[k];
                        } else if(movement == 1 && j > 0) {
                            //printf("Movement = %d", movement);
                            matx[j-1][i] = letters[k];
                        } else if(movement == 2 && j < 10) {
                            //printf("Movement = %d", movement);
                            matx[j+1][i] = letters[k];
                        } else if(movement == 3 && i < 10) {
                            //printf("Movement = %d", movement);
                            matx[j][i+1] = letters[k];
                        }
                    } else {
                        matx[j][i] = '.';
                    }
                }
            }
            printf("%c", matx[j][i]);
        }
        printf("\n");
    }
/*************/
    return 0;
}
