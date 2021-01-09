//
//  main.c
//  Assignment 5 Question 2
//
//  Created by Manny Lemos on 10/6/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>
//import string so gets() is not required
//allegedly its unstable
#include <string.h>

int main()
{
    //declare an array with a decent size (max string length)
    char string[50]; int length;
    //ask for  input up to limit
    printf("Please enter a string up to 50 characters: \n");
    //scans all characters entered and individually stores each one
    //in an array location.
    //basically an array with better usability
    scanf("%s",string);
    
    //using strlen to getstring length without creating a for loop
    //(Increased usability of string reffered to above)
    length = strlen(string);
    
    //arrays begin counting at zero so we use string
    //length -1 to  account for this
    int j = length-1;
    //instead of using a nested forloop, we can increament
    //and  decrement simultaineously to test multiple
    //array points at once 
    for (int i = 0; i < length; i++,j--)
    {
        if (string[i] != string[j])
        {
            printf("This string is not a palindrome\n");
            return 0;
        }
    }
    printf("This string is a palindrome\n");
}
