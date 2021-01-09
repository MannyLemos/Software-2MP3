//
//  main.c
//  Assignment4Question3
//
//  Created by Manny Lemos on 2019-09-28.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    //3.Write a C program to find out the Armstrong number of a given number using for loop.(5%)(Armstrong number of 353 is: 3^3+5^3+3^3= 179)
    
//    The nth-digit numbers equal to sum of nth powers of their digits (a finite sequence), also called Plus Perfect Numbers. They first few are given by 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748
    
    int raw_input, input, num[100], i = 0, armstrong = 0, length = 0;
    printf("Please enter an integer: ");
    scanf("%d",&raw_input);
    
//    conserving the base user input and passing the value along to be  manipulated
    input = raw_input;
    
    for (i; input != 0; i++)
    {
        num[i] = (input%10);
        input = input - input%10;
        input = input/10;
        length += 1;
    }
   
// Resetting the  i integer to 0 so i dont have to create a new variable
//Its just a counter so it shouldnt make the code inherently more confusing
    i = 0;
    for (i; i < length; i++)
    {
        armstrong += pow(num[i],length);
    }
    printf("The input %d yields an armstrong value of %d\n",raw_input, armstrong);
    
    
    return 0;
}
