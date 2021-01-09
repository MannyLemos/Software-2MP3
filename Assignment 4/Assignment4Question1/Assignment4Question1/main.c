//
//  main.c
//  Assignment4Question1
//
//  Created by Manny Lemos on 2019-09-28.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
    // 1.Write a C program to find out whether a given number is palindrome or not using while loop.(a number that reads the same backward as forward. For example: 121) (5%)
        int input; int inputx; int invertedinput = 0; int remainder;
        printf("Enter an integer value: ");
        scanf("%d", &input);
    
        //Use input to preserve the origanal user input value
        //Proceed forward with  number inversion using inputx
        inputx = input;
    
        while (inputx != 0)
        {
            remainder = inputx%10;
            invertedinput  =  invertedinput * 10 + remainder;
            inputx = inputx/10;
        }
    
        if (invertedinput == input)
            printf("The integer entered, %d, is a palindrome, hurray!\n",input);
        else
            printf("The integer entered, %d, is not a palindrome\n",input);

    
    
    return 0;
}
