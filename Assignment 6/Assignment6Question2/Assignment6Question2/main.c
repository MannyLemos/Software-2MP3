//
//  main.c
//  Assignment6Question2
//
//  Created by Manny Lemos on 10/22/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a program in C to convert a binary number into decimal using function with arguments and with return type.(5%)(Get the input from user during run time)

#include <stdio.h>
//include math library for power function
#include <math.h>
//declare int function so return statement is possible
int binary_to_decimal();

int main()
{
    //declare variable
    int binary;
    //request user input
    printf("Enter a Binary value consisting of ones and zeroes:\n");
    //store user input
    scanf("%d", &binary);
    //call function passing it user input
    printf("the decimal value is %d\n",binary_to_decimal(binary));
}

int binary_to_decimal(binary)
{
    //declaring variables
    int mod, i = 0, decimal = 0;
    //continue looping while value for binary is not zero
    while(binary!=0)
    {
        //only want right most value (mod10)
        mod = binary % 10;
        //decimal value = current term + rightmost value * 2 ^ (number of values eliminated)
        decimal += mod * pow(2,i);
        //remove rightmost term
        binary=binary/10;
        
        i++;
    }
    return(decimal);
}
