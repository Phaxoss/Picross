//
//  Clear.c
//  Picross
//
//  Created by Louis Jouclas on 28/03/2018.
//  Copyright © 2018 R&L. All rights reserved.
//

#include "Clear.h"

/* Function that clear the terminal's screen */
void clearScreen() {
    /* Animation - clear the previous display */
    printf("%c[2J", 0x1B);
    /* Animation - Move the cursor top-left */ printf("%c[%d;%dH", 0x1B, 1, 1);
}
