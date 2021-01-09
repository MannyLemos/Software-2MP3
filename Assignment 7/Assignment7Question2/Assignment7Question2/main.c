//
//  main.c
//  Assignment7Question2
//
//  Created by Manny Lemos on 11/3/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

/*
Write a program to compare two dates entered by user during run time. Make a structurenamed Date to store the elements day, month and year to store the dates. If the dates are equal,   display   "Dates   are   equal"   otherwise   display   "Dates   are   not   equal".   You   can   usefunction, but not mandatory for this question. (5%)
*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
}d1,d2;

void main()
{
    struct Date d1;
    printf("please enter the first year (eg 2009):\n");
    scanf("%d",&d1.year);
    printf("\nplease enter the first month (eg 03):\n");
    scanf("%d",&d1.month);
    printf("\nplease enter the first day  (eg 21):\n");
    scanf("%d",&d1.day);
    
    struct Date d2;
    printf("\nplease enter the second year (eg 2009):\n");
    scanf("%d",&d2.year);
    printf("\nplease enter the second month (eg 03):\n");
    scanf("%d",&d2.month);
    printf("please enter the second day (eg 21):\n");
    scanf("%d",&d2.day);
    
    if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
    {
        printf("Dates are equal\n");
    }
    else
        printf("Dates are inequal\n");
}
