//
//  main.c
//  Assignment 3 Question 2
//
//  Created by Manny Lemos on 2019-09-24.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
        //Write a program in C using if-else nesting find the smallest number among given five numbers. (without using array). (5%)
        
        //declaring variables
        double num1, num2, num3, num4, num5;
        //requesting user input
        printf("Please enter the 5 values: ");
        scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);
        
        //Now we must go through all pathways using if and else
        double smallest = num1;
        if (smallest < num2)
        {
            if (smallest < num3)
            {
                if (smallest < num4)
                {
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
                else
                {
                    smallest = num4;
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
            }
            else
            {
                smallest = num3;
                if (smallest < num4)
                {
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
                else
                {
                    smallest = num4;
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
            }
        }
        else
        {
            smallest = num2;
            if (smallest < num3)
            {
                if (smallest < num4)
                {
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
                else
                {
                    smallest = num4;
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
            }
            else
            {
                smallest = num3;
                if (smallest < num4)
                {
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
                else
                {
                    smallest = num4;
                    if (smallest < num5)
                    {
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                    else
                    {
                        smallest = num5;
                        printf("The smallest value is %.1lf\n",smallest);
                        return 0;
                    }
                }
            }
        }
    return 0;
}
