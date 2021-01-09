//
//  main.c
//  Assignment6Question3
//
//  Created by Manny Lemos on 10/23/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a C program using four functions add(), sub(), mul(), div() to add two numbers, to subtract two numbers, to multiply the results of add() and sub(), and to two divide theresults of add() and sub() respectively by using method with arguments and withreturn type. (5%) Note: add(), mul() and div() functions are called by main() function , but sub() is calledby add(). Use global and local variables carefully. Get all the inputs during run time

#include <stdio.h>

//delcaring global variables
int addition, subtraction, multiplication;
float division;

int main()
{
    int a,b;
    //requesting input
    printf("Please enter 2 integer values \nseperated by a space:\n");
    //taking input
    scanf("%d%d",&a,&b);
    
    //calling add() function passing user input
    add(a,b);
    //printing result of add() function's appemndment to 'addition'
    printf("The result of addition is: %d\n", addition);
    
    //printing result of sub() function's appemndment to 'subtraction'
    printf("The result of subtraction is: %d\n", subtraction);
    
    //calling mul() function
    mul(addition, subtraction);
    //printing result of mul() function's appemndment to 'multiplication'
    printf("The result of multiplication is: %d\n", multiplication);
    
    //calling div() function
    dive(addition, subtraction);
    //printing result of div() function's appemndment to 'division'
    printf("The result of division is: %.2f\n", division);
}

int add(a,b)
{
    
    sub(a,b);
    addition = a + b;
    return (0);
}

int sub(a,b)
{
    subtraction = (a-b);
    return (0);
}

int mul(c,d)
{
    multiplication = c*d;
    return (0);
}

int dive(c,d)
{
    division = (float)c/(float)d;
    return (0);
}

