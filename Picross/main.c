//
//  main.c
//  Picross
//
//  Created by Louis Jouclas on 21/03/2018.
//  Copyright © 2018 R&L. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Create_tab.h"
#include "Clear.h"
#include "MENU.h"
#include "Model.h"

void compt (int Lmax, int Cmax, int Lmin, int Cmin, int Cacc, int Lacc,int TAB[Lmax+1][Cmax+1]){
    int i, p;
    int Acc;
    for (i = Cmin; i < Cmax+1; i++){
        Acc = Cacc;
        for (p = Lmax; p > Lacc; p--){
            if (TAB[i][p] == 1){
                TAB[i][Acc] ++;
            }
            if (TAB[i][p]==0 && TAB [i][Acc] !=0) {
                Acc --;
            }
        }
    }
   
    for (i = Lmin; i < Lmax+1; i++){
        Acc = Lacc;
        for (p = Cmax; p > Cacc; p--){
            if (TAB[p][i] == 1){
                TAB[Acc][i] ++;
            }
            if (TAB[p][i]==0 && TAB [Acc][i] !=0) {
                Acc --;
            }
        }
    }
    
}

void Display_TAB (int Lmax, int Cmax,int TAB[Lmax+1][Cmax+1]){
    int i, j;
    for (i=0; i <=Lmax; i++){
        for (j=0; j<=Cmax; j++){
                if (TAB[i][j] == 0){printf("  ");}
                else {
                printf("%d ", TAB[i][j]);
                }
        }
        printf("\n");
    }
}

int main()
{
    clearScreen();
    srand((unsigned int)time(NULL));
    int n = 0, m= 0;
    int mod;
    mod = Ini_menu(&n, &m);
    
    int Lacc, Lmin, Lmax, Cacc, Cmin, Cmax;
    if(m%2 == 0){
        Lmin = m/2;
        Lacc = Lmin -1;
        Lmax = (3*m/2) - 1;
    }
    else{
        Lmin = (m + 1)/2;
        Lacc = Lmin - 1;
        Lmax = ((3*m + 1)/2) - 1;
    }
    if(n%2 == 0) {
        Cmin = n/2;
        Cacc = Cmin - 1;
        Cmax = (3*n/2) - 1;
    }
    else{
        Cmin = (n + 1)/2;
        Cacc = Cmin - 1;
        Cmax = ((3*n + 1)/2) - 1;
    }
    
    int TAB[Lmax+1][Cmax+1];
    
    Model_tab(mod, Lmax, Cmax, TAB);
    createTAB(Lmin, Lmax, Cmin, Cmax,TAB);
    Display_TAB(Lmax, Cmax,TAB);
    compt(Lmax, Cmax, Lmin, Cmin, Cacc, Lacc,TAB);
    printf("\n\n\n");
    clearScreen();
    Display_TAB(Lmax, Cmax,TAB);
    printf("\n\n\n\n\n\n\n\n\n");
    return 0;
}
