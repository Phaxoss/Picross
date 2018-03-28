//
//  MENU.c
//  Picross
//
//  Created by Louis Jouclas on 28/03/2018.
//  Copyright © 2018 R&L. All rights reserved.
//

#include "MENU.h"
#include "Clear.h"


int Ini_menu (int *n, int *m){
    int choix;
    int mod;
    printf ("           *****  Welcome to Picross  *****\n\n");
    printf ("                                                               By R&L\n");
    printf("1 - Random \n2 - Model\n\n\n");
    printf("Select a mode : ");
    scanf("%d",&choix);
    clearScreen();
    if (choix == 1){
        printf ("Enter the size of the array : \nNumber of line : ");
        scanf ("%d",m);
        printf("\nNumber of Column : ");
        scanf ("%d",n);
        return 0;
    }
    else {
        printf ("Chose the Model : \n1 - Chat\n2 - Mickey\n");
        scanf("%d",&choix);
        if (choix == 1) {
            *n = 22;
            *m = 26;
        }
        
    }
    return choix;
}
