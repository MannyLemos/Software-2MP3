//
//  main.c
//  Q2
//
//  Created by Manny Lemos on 11/8/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a C program which reads data  from file and print the output as one character on newline. (5%)
//Input:Assume a .txt File having following contents in it:
//PROGRAMMING.
//Output:
//P
//R
//O
//G
//M
//M
//I
//N
//G


#include <stdio.h>

int main()
{
    //declaring things
    char c;
    //declaring pointer file with FILE
    //"A FILE is a type of structure typedef as FILE"
    FILE *file;
    //opening the file
    //mine is  called "programming.txt"
    file = fopen("programming.txt", "r");
    
    //if the file exists in your directory thiswill run
    //basically if the value stored in "file" isnt null
    if (file)
    {
        //could have put c = fgetc(file) in while loop statement
        //but it seemed confusing
        //this is more explicit
        c = fgetc(file);
        while (c != EOF)
        {
            printf("%c\n",c);
            c = fgetc(file);
        };
        //close the file
        fclose(file);
    }
    
    else
        printf("The file programming.txt is  not in your directory\n");
        fclose(file);
    return 0;
    
}
