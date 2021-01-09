//
//  main.c
//  Assignment5Question4
//
//  Created by Manny Lemos on 10/7/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
    // Write a C program that that sorts an array of nine integers in ascending order,
    //and prints the sorted array. (5%)
    //For example, {21, 5, 4, 7, 17, 3, 1, 12, 2} should be printed as....1 2 3 4 5 7 12 17 21
  
    //declaring variables
    //Instructions never said whether array length is assumed to always be 9
    //If not, one could iterate through a loop and count the number of components
    int i, length = 9, j, k, A[9] = {21, 5, 4, 7, 17, 3, 1, 12, 2};
    
    printf("The base input array:\n");
    for (i = 0; i < length; ++i)
    printf("%d,", A[i]);
    //formatting so the code is pretty
    printf("\n");
    
    //iterating for all i values which corespond to array places
    for (i = 0; i < length; i++)
    {
        //finds the smallest value in the array
        //and sets it to be A[i]
        for (j = i+1; j < length; j++)
        {
            if (A[i] > A[j])
            {
                k = A[i];
                A[i] = A[j];
                A[j] = k;
            }
            
        }
        
    }
    //simple for loop to print the newly  organized array
    printf("The array organized in ascending order:\n");
    for (i = 0; i < length; ++i)
    printf("%d,", A[i]);
    //formatting so the code is pretty
    printf("\n");
}
