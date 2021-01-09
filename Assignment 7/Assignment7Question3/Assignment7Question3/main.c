//
//  main.c
//  Assignment7Question3
//
//  Created by Manny Lemos on 11/3/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

/*
 Write a program to add and subtract two complex numbers using structures to function.Take input from user during run time. (5%)
 Input:  Enter 1st real no.  20
 Enter 1st imaginary no.  2
 Enter 2nd real no.  3
 Enter 2nd imaginary no. 1
 Output: Addition of two complex no. is: 23 + i3
 Subtraction of two complex no. is: 17 + i1
*/

#include <stdio.h>

//creating structure
struct complexmath
{
    //creating components real and imaginary to store the real and imaginary components
    int real;
    int imaginary;
} complex;

//add function  declaration
struct complexmath add(struct complexmath val1,struct complexmath val2);
//sub function declaration
struct complexmath sub(struct complexmath val1,struct complexmath val2);

//main
int main()
{
    //declaring structure variables
    struct complexmath val1, val2, plus, minus;
    //request
    printf("Enter 1st real no. ");
    //recieve
    scanf("%d", &val1.real);
     //request
    printf("Enter 1st imaginary no. ");
    //recieve
    scanf("%d",&val1.imaginary);
     //request
    printf("Enter 2nd real no. ");
    //recieve
    scanf("%d", &val2.real);
     //request
    printf("Enter 2nd imaginary no. ");
    //recieve
    scanf("%d",&val2.imaginary);
    
    //calling addition function
    plus = add(val1, val2);
    //output
    printf("Addition of two complex no. is: %d + i%d\n", plus.real, plus.imaginary);
    //calling sub function
    minus = sub(val1, val2);
    //output
    printf("Subtraction of two complex no. is: %d + i%d\n", minus.real, minus.imaginary);
    return 0;
}

//add function
struct complexmath add(struct complexmath val1, struct complexmath val2)
{
    //variable that acts as placeholder
    struct complexmath holder1;
    //real component addition statement
    holder1.real = val1.real + val2.real;
    //imaginary component addition statement
    holder1.imaginary = val1.imaginary + val2.imaginary;
    //return
    return(holder1);
}

struct complexmath sub(struct complexmath val1, struct complexmath val2)
{
    //variable that acts as placeholder
    struct complexmath holder2;
    //real component subtraction statement
    holder2.real = val1.real - val2.real;
    //imaginary component subtraction statement
    holder2.imaginary = val1.imaginary - val2.imaginary;
    //return
    return(holder2);
}
