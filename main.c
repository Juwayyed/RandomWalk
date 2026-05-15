#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 10
#define M 10
#define NUM_DIRECTIONS 4

int main()
{
    int i, j, k, movement;
    char matx[N][N];
    char ch, letter;
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    /* Initializing The Random Walk */
    printf("Press x to start The Random Walk: \n");
    while(ch!='x') {
        ch = getchar();
    }

    /* Populating The Matrix With Dots */
    for(i = 0 ; i < N ; i++) {
        for(j = 0 ; j < N ; j++) {
            if(ch == 'x') {
                if(i == 0 && j == 0) {
                    matx[j][i] = letters[0];
                } else {    //Gen random num here then type the letters sequentially
                    //Populate all other positions with dots
                    matx[j][i] = '.';
                    /* Generating A Random Number Between 0 and 3 */
                    srand((unsigned)time(NULL));
                    movement = rand() % NUM_DIRECTIONS;
                    //printf("%d\n", movement);
                    k++;
                    switch(movement) {
                    case 0:
                    i > 0 ? matx[j][i-1] = letters[k] : exit;
                    printf("%c", letters[k]);
                    break;
                    case 1:
                    j > 0 ? matx[j-1][i] = letters[k] : exit;
                    matx[j][i] = letters[k];
                    printf("%c", letters[k]);
                    break;
                    case 2:
                    j < 11 ? matx[j+1][i] = letters[k] : exit;
                    matx[j][i] = letters[k];
                    printf("%c", letters[k]);
                    break;
                    case 3:
                    i < 11 ? matx[j][i+1] = letters[k] : exit;
                    matx[j][i] = letters[k];
                    printf("%c", letters[k]);
                    break;
                  }
                }
            }

            printf("%c", matx[j][i]);
        }
        printf("\n");
    }
    /* End of Populating The Matrix */

    // Directions UP & DOWN = First Bracket || Left & Right = Second Bracket


/**************/

/* Starting The Sequence */
/*
                for(k = 0 ; k < sizeof(letters) ; k++) {


                    if(i > 0 || j > 0) {

                        printf("%c", matx[j][i]);
                    }
                }
*/
/*************/
    return 0;
}
