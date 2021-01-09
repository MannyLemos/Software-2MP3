//
//  main.c
//  Assignment6Question4
//
//  Created by Manny Lemos on 10/23/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a C program using a function without arguments and without return type to find greatest common divisor (G.C.D) of two numbers. (5%)For example:Input:Enter two positive numbers:18 24 Output:G.C.D of two numbers is : 6 Note: G.C.D of two numbers is the largest number that can divide both numbers without any remainder. There are different methods available in C to find the GCD. You can apply any of the methods in the function. Get the input from user during run time.

#include <stdio.h>
//non returning function FGCD()
void FGCD();
//Global variables so no arguments are required
int val1, val2;

int main()
{
    //request input
    printf("Please enter 2 integer values seperated by a space:\n");
    //take input
    scanf("%d%d",&val1,&val2);
    //function call
    FGCD();
}

void FGCD()
{
    //declaring variables
    int i, gcd;
    //checking remainder of both user inputs divided
    //by all numbers lower than both of the users inputs
    for(i=1; i <= val1 && i <= val2; ++i)
    {
        //if mod of both is zero, gcd is updated
        if(val1 % i == 0 && val2 % i == 0)
            gcd = i;
    }
    //print data
    printf("The greatest common denomenator of \n%d and %d is %d\n", val1, val2, gcd);
}
