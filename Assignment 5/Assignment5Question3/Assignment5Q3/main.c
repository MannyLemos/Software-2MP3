//
//  main.c
//  Assignment5Q3
//
//  Created by Manny Lemos on 10/7/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
    //Write a C program that returns the largest number in a 4 x 5 multidimensional array.(5%)
    
    //declaring variables, initializing for loop variables (form)
    float biggest;int i = 0, j = 0;
    
    //entering the given array in the question
    float A[4][5] = {
        {1.53, 0.49, 0.19, 0.75, 6.50},
        {0.17, 0.10, 0.67, 1.00, 0.98},
        {0.82, 0.18, 13.18, 0.59, 0.20},
        {0.09, -0.04, 0.03, 0.45, 0.52}
    };
    
    //initializing biggest to the first value in the array
    //so it can be immediatly compared to other values
    biggest  = A[0][0];
    
    //for i in range 0 to 3 (row range of array)
    for (i = 0; i < 4; i++)
    {
        //for j in range 0 to 4 (column range of array)
        for (j = 0; j < 5; j++)
        {
            //if the value in the array we are currently iterating through
            //is greater than biggest, then biggest becomes that value
            if (A[i][j] > biggest)
                biggest = A[i][j];
        }
    }
    
    //print biggest as the question  requests
    printf("The largest value in the array is %.2f\n",biggest);
}
