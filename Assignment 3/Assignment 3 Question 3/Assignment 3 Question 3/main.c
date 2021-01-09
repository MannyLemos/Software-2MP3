//
//  main.c
//  Assignment 3 Question 3
//
//  Created by Manny Lemos on 2019-09-24.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main() {
    //Take five subjects marks and find the grade of students using if-else ladder. Library functions are not allowed to compute average.( Less than 40%- Grade F, Greater than equal to 40% and less than equal to 50% - Grade E,Greater than equal to 50% and less than equal to 60% - Grade D, Greater than equal to 60% andless than equal to 70% - Grade C, Greater than equal to 70% and less than equal to 80% -Grade B, Greater than equal to 80% and less than equal to 90% - Grade A, Greater than 90% -Grade A+).  (5%)
        
    double grade1, grade2, grade3, grade4, grade5, average;
        printf("Please enter the 5 grade values (0-100): ");
        scanf("%lf %lf %lf %lf %lf", &grade1, &grade2, &grade3, &grade4, &grade5);
        
    average  = (grade1 + grade2 + grade3+ grade4+ grade5)/5;
    
        if (average < 40)
            printf("The grade for class one is F\n");
        else if (average < 50)
            printf("The grade for class one is E\n");
        else if (average < 60)
            printf("The grade for class one is D\n");
        else if (average < 70)
            printf("The grade for class one is C\n");
        else if (average < 80)
            printf("The grade for class one is B\n");
        else if (average < 90)
            printf("The grade for class one is A\n");
        else
            printf("The grade for class one is A+\n");
    
        
        

    return 0;
}
