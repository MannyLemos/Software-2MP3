//
//  main.c
//  Assignment7Question4
//
//  Created by Manny Lemos on 11/3/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.

/*
 Write a program to convert temperature from Fahrenheit to Celsius using structure without using any another separate function. Enter the value of temperature in Fahrenheit during structure variable declaration. (3%)
 
C = (5/9) * (f - 32)
*/

#include <stdio.h>

//creating structure
struct tempConvert
{
    //structure component tempf
    int tempf;
}t;


int main()
{
    //variables
    float ctemp, ftemp;
    //initializing steucture variable during declaration
    struct tempConvert t = {100};
    ftemp = t.tempf;
    ctemp = ((float)5/9) * (ftemp - 32);
    //print output
    printf("%f degrees farenheit = %f degrees celsius\n",ftemp, ctemp);
    return 0;
}
