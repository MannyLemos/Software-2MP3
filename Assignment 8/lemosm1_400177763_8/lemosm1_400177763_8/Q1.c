//
//  main.c
//  Q1
//
//  Created by Manny Lemos on 11/8/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a C program to concatenate two file and write the output in third file. (5%)
//Input : Let’s say there are two .txt files fi1.txt and f2.txt .
//File f1.txt has data “I am a student.” and
//file f2.txt has data “I am 19 years old.”
//Output:A third file f3.txt contains concatenated data of both files. File f3.txt has data “I am a student.I am 19 years old.”

#include <stdio.h>

int main()
{
    //Declaring pointers of type FILE
    FILE *file1;
    FILE *file2;
    FILE *file3;

    //variable to transfer file data
    char ch;

    //opening files
    file1 = fopen("f1.txt", "r");
    file2 = fopen("f2.txt", "r");
    file3 = fopen("f3.txt", "w");


    //If any of the files dont exist the user will be told and program exits
    if (file1 == NULL || file2 == NULL || file3 == NULL)
    {
        printf("\nThe files f1.txt, f2.txt, f3.txt do not exist in your directory\n");
        return 0;
    }


    //first file contents are transferred to the third file
    while ((ch = fgetc(file1)) != EOF)
        fputc(ch, file3);

    //second file contents are transferred to the third file
    while ((ch = fgetc(file2)) != EOF)
        fputc(ch, file3);
    
    //files are closed effectively saving changes to the third file
    fclose(file1);
    fclose(file2);
    fclose(file3);

    //reopening third file to be read
    file3 = fopen("f3.txt", "r");
    
    //printing the contents ofthe third file
    while ((ch = getc(file3)) != EOF)
    {
        printf("%c",ch);
    };
    
    //formatting and return
    printf("\n");
    return 0;
}
