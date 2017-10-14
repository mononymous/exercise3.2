/* exerciese3.2.cpp: numbers game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int ix, ia, ib, nfactor;
    float fa1, fb1, fa2, fb2, fa3, fb3;

    nfactor=10;
    srand((unsigned) time(NULL));    /* seeds of randam number */
    ix = rand()%nfactor;         /* random number between 0 and 9. */
    
    fprintf(stdout, "The selected number is %d ;.\n", ix);
    
    fprintf(stdout, "Player one, imput a number between 0 and 9.\n");
    fscanf(stdin, "%f", &fa1);
    
    fprintf(stdout, "Player two, imput a number between 0 and 9.\n");
    fscanf(stdin, "%f", &fb1);
    
    fprintf(stdout, "The selected number is %f and %f ;.\n", fa1, fb1);
    
//  Calculating diffences
    fa2 = ix - fa1;
    fb2 = ix - fb1;
    
//  Absolute value
    if (fa2 < 0) {
        fa3 = -fa2;
    } else {
        fa3 = fa2;
    }
    
    if (fb2 <0) {
        fb3 = -fb2;
    } else {
        fb3 = fb2;
    }
    
//  Winner statement    
    
    if (fa3 < fb3) {
        fprintf(stdout, "Player one is the winner!\n");
    } else if (fa3 > fb3) {
        fprintf(stdout, "Player two is the winner!\n");
    } else {
        fprintf(stdout, "It is a tie!\n");
    }

    return 0;
}