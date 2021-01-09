//
//  main.c
//  Assignment7Question1
//
//  Created by Manny Lemos on 11/3/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

/*
 Write a structure to store the student number, name, age (between 16 to 21) and address of students. Store the data of 8 students. Take values of variables from user during runtime. Now perform following operations: (7%)
 a)Write a function to print the name and student number of all the students having age between 17 to 19.
 b)Write   another   function   to   print   the   names   of   all   the   students   having   odd   studentnumber.
 */
#include <stdio.h>

//structure creation
//i tried to do it without typedef for learning
struct student
{
    //declaring structure components
    int studentNum;
    char name[50];
    int age;
    char address[50];
//saying a list of length 8 is referencing this structure
} s[8];

//first function to display students  aged  17-19
struct student disp1(struct student s[8])
{
    printf("\nDisplaying students aged  17 - 19:");
    //iterates  over all students
    for(int i=0; i<8; ++i)
        //checks age bound
        if (s[i].age >= 17 && s[i].age <= 19)
        {
            //prints data
            printf("\n\nstudent number: %d",s[i].studentNum);
            printf("\nName: %s",s[i].name);
            printf("\nAge: %d",s[i].age);
        }
    //non void function so unimportant return statement
    return (s[0]);
}

//second function to display off student numbers
struct student disp2(struct student s[8])
{
    printf("\n\nDisplaying students with \nan odd student number:");
    //iterates over all students
    for(int i=0; i<8; ++i)
        //if studentNum is odd -> run
        if (s[i].studentNum % 2 != 0)
        {
            //print required data
            printf("\nName: %s",s[i].name);
        }
    //non void function so unimportant return statement
    return (s[0]);
}

//main
int main(int argc, char *argv[])
{
    printf("Begin data entry\n");
    //iterates through 8 student creations
    for(int i = 0; i < 8; ++i)
    {
        //placeholder variable to check erroneous ages
        //acts as a proxy so structure doesnt get messed up
        int holder;
        
        //begin requesting data from user
        printf("\nStudent Number %d",i+1);
        printf("\nEnter student number:\n");
        scanf("%d",&s[i].studentNum);
        printf("\nEnter name followed by a period:\n");
        scanf("%[^.]%*s",s[i].name);
        printf("\nEnter age: \n");
        scanf("%d",&holder);
        //while age is not within bounds
        //ask for  age within bounds
        while (holder < 16 || holder > 21)
        {
            printf("please enter a valid age between 16 and 21:\n");
            scanf("%d",&holder);
        };
        s[i].age = holder;
        printf("\nEnter address followed by a period: \n");
       scanf("%[^.]%*s",s[i].address);
    }
    //function calls
    disp1(&s[0]);
    disp2(&s[0]);
    
    return 0;
}


