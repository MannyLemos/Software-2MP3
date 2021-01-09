//
//  main.c
//  Assignment 3 Question 4
//
//  Created by Manny Lemos on 2019-09-24.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
    //Write a program in C to find whether a given input entered by user is alphabet, digit, or specialsymbol? (5%)
        
        char character;
    
        printf("enter any character: ");
        scanf("%c",&character);
    
        if ( (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
            printf("The character entered, '%c', is alphabet\n",character);
    
        else if(character >= '0' && character <= '9')
        {
            printf("The character entered, '%c', is digit\n", character);
        }
        else
        {
            printf("The character entered, '%c', is special symbol\n",character);
        }
    return 0;
}
