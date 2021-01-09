//
//  main.c
//  Assignment4Question4
//
//  Created by Manny Lemos on 2019-09-28.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
//4.Write a C program to print 100 (in 10 rows and 10 columns) smiling faces on screen using nested for loop. (5%)(ASCII value of smiling face is 1)
    int i = 0, j = 0;

    for (i; i < 10; i++)
    {
        j = 0;
        for (j; j < 10; j++)
            printf("%c",1);
            //on swift with Unicode (UTF-8) this outputs nothing
            //to get output I use:
            //printf("\u263A");
        printf("\n");
    }
       return 0;
}
