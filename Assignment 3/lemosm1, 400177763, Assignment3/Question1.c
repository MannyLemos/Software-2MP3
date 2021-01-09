//
//  main.c
//  Assignment 3 Question 1
//
//  Created by Manny Lemos on 2019-09-24.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{

    //  Write a program in C to make a simple Calculator using switch and if statements. Which performs arithmetic operation (+,-,*,/) (5%)
            //declaring variables
            char Operator;
            double num1, num2;
            //requesting user input
            printf("Please enter an operator (* + -): ");
            scanf("%c", &Operator);
            //requesting user input
            if (Operator == '-')
            {
                printf("Please enter first the minuend followed \nby the subtrahend: ");
                scanf("%lf %lf",&num1,&num2);
            }
            else
            {
                printf("\nPlease enter the 2 operand values: ");
                scanf("%lf %lf",&num1,&num2);
            }
            //Switch statement is passed "Operator" value
            switch(Operator)
            {
                case '+':
                printf("%.1lf + %.1lf = %.1lf\n",num1,num2,num1+num2);
                break;
    
                case '-':
                printf("%.1lf - %.1lf = %.1lf\n",num1,num2,num1-num2);
                break;
    
                case '*':
                printf("%.1lf x %.1lf = %.1lf\n",num1,num2,num1*num2);
                break;
                //This will only run if an invalid input is taken from user
                default:
                printf("You did not successfully enter an operand\n");
                break;
            }
//in case anything goes wrong
return 0;
}
