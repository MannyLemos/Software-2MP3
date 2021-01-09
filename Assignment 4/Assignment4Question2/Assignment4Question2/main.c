//
//  main.c
//  Assignment4Question2
//
//  Created by Manny Lemos on 2019-09-28.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
    //2.Write a C program to print Fibonacci series up to 30 using do while loop. (5%)(Fibonacci Sequence up to 30 is : 0, 1, 1, 2, 3, 5, 8, 13, 21,....)
    char start; int place1 = 0; int place2 = 1; int i = 0; int nextloop;
    printf("press enter to see the fibbaci sequence up to 30");
    scanf("%c",&start);
    printf("The fibbonaci sequence up to 30 is:\n");
    do
    {
        printf("%d ", place1);
        nextloop = place1 + place2;
        place1 = place2;
        place2 = nextloop;
        i = place1;
    }
    while (i < 30);
    printf("\n");
    return 0;
}
