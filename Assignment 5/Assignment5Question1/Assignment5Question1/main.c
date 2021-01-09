//
//  main.c
//  Assignment5Question1
//
//  Created by Manny Lemos on 10/6/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    //variable declariation
    int i=0, j=0, count = 0; char string[50], test[10] = "aeiouAEIOU";
    
    //asking for input
    printf("I will tell you how many \nvowels are in your string\nPlease enter a string up \nto 50 characters: ");
    
    //recieving input and putting individual chars into an array
    scanf("%s",string);
    
    //interating over all components of user input
    for (i=0; string[i] != 0; i++)
    {
        //iterating over all testing chars
        for (j=0; j<10 ; j++)
        {
            //if any of the test chars end up equaling the current char position
            //count will increase by 1
            if (string[i]  == test[j])
            {
                count += 1;
            }
        }

    }
    //print the origanal word to remind user
    //good for testing too
    printf("The word you entered is ");
    for (i=0; string[i] != 0; i++)
    {
        //prints the char at specified location in array
        printf("%c",string[i]);
    }
    //prints the number of vowels counted. Stored in variable count
    printf("\nThe number of vowels entered is %d\n",count);
}
