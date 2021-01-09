//
//  main.c
//  Q3
//
//  Created by Manny Lemos on 11/8/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>
int main()
{
    
    printf("The contents of file1.c are:\n\n");
    
    //declaring pointer file1 of type FILE
    FILE *file1;
    //char c to hold stuff
    char c;
    
    //opening file1.c making use of pointer file1
    file1 = fopen("file1.c","r");
    
    //while the character in the file does not equal -1
    while((c = getc(file1)) != EOF)
         putchar(c);
    
    //closing file1.c
    fclose(file1);
    
    printf("\nThe contents of file1.c have concluded\n");
    return 0;
}
