////
////  main.c
////  yuh yeet
////
////  Created by Manny Lemos on 11/4/19.
////  Copyright © 2019 Manny Lemos. All rights reserved.
////
//
//#include <stdio.h>
//
////creating structure
//struct student
//{
//    //creating components real and imaginary to store the real and imaginary components
//    int studentNum;
//    char name[50];
//    int age;
//    char address[50];
//} s0, s1, s2, s3, s4, s5, s6, s7;
//
////add function  declaration
//struct student add(struct student val1,struct student val2);
////sub function declaration
//struct student sub(struct student val1,struct student val2);
//
////main
//int main()
//{
//    //declaring structure variables
//    struct student s0, s1, s2, s3, s4, s5, s6, s7;
//
//    printf("Begin data entry\n");
//    for(int i = 0; i < 2; ++i)
//    {
//        printf("Student Number %d",i+1);
//        printf("\nEnter student number:\n");
//        scanf("%d",&si.studentNum);
//        printf("\nEnter name:\n");
//        scanf("%s",&s[i].name);
//        printf("\nEnter age: \n");
//        scanf("%d",&s[i].age);
//        printf("\nEnter address: \n");
//        scanf("%s",&s[i].address);
//    }
//    //calling addition function
//    plus = add(val1, val2);
//    //output
//    printf("Addition of two complex no. is: %d + i%d\n", plus.real, plus.imaginary);
//    //calling sub function
//    minus = sub(val1, val2);
//    //output
//    printf("Subtraction of two complex no. is: %d + i%d\n", minus.real, minus.imaginary);
//    return 0;
//}
//
////add function
//struct complexmath add(struct complexmath val1, struct complexmath val2)
//{
//    //variable that acts as placeholder
//    struct complexmath holder1;
//    //real component addition statement
//    holder1.real = val1.real + val2.real;
//    //imaginary component addition statement
//    holder1.imaginary = val1.imaginary + val2.imaginary;
//    //return
//    return(holder1);
//}
//
//struct complexmath sub(struct complexmath val1, struct complexmath val2)
//{
//    //variable that acts as placeholder
//    struct complexmath holder2;
//    //real component subtraction statement
//    holder2.real = val1.real - val2.real;
//    //imaginary component subtraction statement
//    holder2.imaginary = val1.imaginary - val2.imaginary;
//    //return
//    return(holder2);
//}


#include <stdio.h>
void sum();
void main()
{
    int matrix1[2][2] = {1,2,3,4};
    sum(matrix1);
}

void sum(int *ptr)
{
    printf("The sum of row 1 is %d",ptr[0]+ptr[1]);
    printf("\n The sum of row 2 is %d\n",ptr[2]+ptr[3]);
}
