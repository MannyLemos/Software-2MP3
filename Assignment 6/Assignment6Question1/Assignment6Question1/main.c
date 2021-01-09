//
//  main.c
//  Assignment6Question1
//
//  Created by Manny Lemos on 10/22/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.

//declaring function
#include <stdio.h>
void textReverse();

// Write a C program using recursion to reverse a sentence. (5%)(For example, Input:   gnimmargorP nraeL Output:  Learn Programming)Note:Input can be taken during execution or compilation time

int main()
{
    //requesting input
    printf("Please enter a sentence to be inverted:\n");
    //textReverse function is called
    textReverse();
    
    //formatting
    printf("\n");
    //ends
    return 0;
}

void textReverse()
{
    //char type variable character is declared
    char character;
    
    //user input is stored in 'character'
    scanf("%c", &character);
    
    //if user input does not = enter
    //read the second user input (recursion)
    //This continues until all user input is read
    //and we are x layers deep into recursion
    //Then from bottom up, respective characters
    //are printed out effectively reversing user input
    if(character != '\n')
    {
        textReverse();
        printf("%c",character);
    }
}
