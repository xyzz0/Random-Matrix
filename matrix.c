// Made by xyzz0
// https://www.github.com/xyzz0/Random-Matrix

#include <stdio.h>  // I/O library
#include <stdlib.h> // rand() library
#include <time.h>   // rand() seedgen

int main(){
    int nrows,ncolumns,x,y;   //Variables

    printf("\nChoose the number of rows you want the matrix to have: ");
    scanf("%d",&nrows);

    if ( nrows < 2 || nrows > 99 ) {
        printf("\nChoose a number between [2-99]");
        return 1;
    }

    printf("Choose the number of columns you want the matrix to have: ");
    scanf("%d",&ncolumns);

    if ( ncolumns < 2 || ncolumns > 99 ) {
        printf("\nChoose a number between [2-99]");
        return 1;
    }


    if (ncolumns == 2 && nrows == 2) {
        printf("\nSmallest matrix allowed are 3 x 2 or 2 x 3");
        return 1;
    }


    // Matrix size indication
    if(nrows == ncolumns) {
        printf("\nSquare matrix %d x %d\n", nrows, ncolumns);
    }
    else {
        printf("\n%d x %d\n", nrows, ncolumns);
    }
    printf("\n");



    srand ( time(NULL) );   // rand() seedgen
    int matrix[nrows][ncolumns];  // Matrix declaration

   // Matrix init & Output (A)
    printf ("\nMatriz (A)\n");
    for (x = 0; x < nrows; x++) {
        for ( y = 0; y < ncolumns; y++ ) {
            matrix[x][y] = rand()%100;
            if ( matrix[x][y] < 10 )
                printf("0%d ",matrix[x][y]);
            else
                printf("%d ",matrix[x][y]);
        }
        printf("\n");
    }

    if ( nrows != ncolumns ){

        printf("\nOutput 3\n"); // Output 3 - Even numbers
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( matrix[x][y] % 2 == 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 4\n"); // Output 4 - Odd numbers
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( matrix[x][y] % 2 != 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

    }

    else{

        printf("\nOutput 1\n"); // Output 1 - Left Diagonal
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if (x == y) {
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

        printf("\nOutput 2\n"); // Output 2 - Right Diagonal
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( x == nrows - y - 1 ) {
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

        printf("\nOutput 3\n"); // Output 3 - Even numbers
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( matrix[x][y] % 2 == 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

        printf("\nOutput 4\n"); // Output 4 - Odd numbers
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( matrix[x][y] % 2 != 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

        printf("\nOutput 5\n"); // Output 5 - Superior Diagonal
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( x < y  || x == y){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

        printf("\nOutput 6\n"); // Output 6 - Inferior Diagonal
        for ( x = 0; x < nrows; x++ ) {
            for ( y = 0; y < ncolumns; y++ ) {
                if ( x > y  || x == y){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }
    }

    return 0;
}
