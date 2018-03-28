//
//  Create_tab.c
//  Picross
//
//  Created by Louis Jouclas on 28/03/2018.
//  Copyright © 2018 R&L. All rights reserved.
//

#include "Create_tab.h"
void createTAB(int Lmin, int Lmax, int Cmin, int Cmax,int TAB[Lmax+1][Cmax+1])
{
    int i, j;
    for (i = Lmin; i<=Lmax; i++){
        for (j = Cmin; j<=Cmax; j++){
            TAB[i][j] = rand()%2;
        }
    }
    for (i = Lmin; i <=Lmax; i++){
        for (j = 0; j < Cmin; j++){
            TAB[i][j] = 0;
        }
    }
    for(i = 0; i < Lmin; i++){
        for (j= Cmin; j<= Cmax; j++){
            TAB[i][j] = 0;
        }
    }
    for(i = 0; i < Lmin; i++){
        for (j= 0; j< Cmin; j++){
            TAB[i][j] = 3;
        }
    }
}
