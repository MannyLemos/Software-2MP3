//
//  main.c
//  Q4
//
//  Created by Manny Lemos on 11/8/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//

#include <stdio.h>

int main()
{
    //declare pointer file oftype FILE
    FILE *file;
    int arr[10];
  
    file = fopen("UserArray.dat","wb");
    
    printf("Enter ten values, enter the first value then hit enter\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Value %d -> ",i+1);
        scanf("%d", &arr[i]);
    }
    fwrite(arr,sizeof(arr),1,file);
    fclose(file);
    return 0;
}
