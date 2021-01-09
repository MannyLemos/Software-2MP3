//
//  main.cpp
//  Assignment9Question2
//
//  Created by Manny Lemos on 11/15/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a program in C++ using class to draw the following pattern.
//Define a function outside of the class to draw the pattern.
//Don’t use any constructor. (5%)
//A C E G
//I K M
//O Q
//S

//general statements
#include <iostream>
using namespace std;

//declare class pattern
class pattern
{
public : // Three types access specifier: public, private, protected
    float a = 65; //65 represents 'A' when casted as chardata type
    public :
    void start() // Member functions
    {
        //outputs to  user
        cout<<"**Alphabetical Pattern**\n";
    }
    
    //function to get the value of a (65)
    int geta()
    {
        return a;
    }
};

//non returning function, with 1 argument, outside of class "pattern"
void draw(int b)
{
    //forloop to achieve the requested pattern
    int count = 0;
    for (int i = 4; i>0; i--)
    {
        for (int j = 0; j<i; j++)
        {
            cout<<(char)(b+count)<<" ";
            count += 2;
        }
        cout<<"\n";
    }
}

int main()
{
    pattern var1;   //object declaration
    var1.start();  //runs function start in pattern class
    int b = var1.geta(); //sets int variable b = a from pattern class for object var1
    draw(b); //calls function draw outside of class pattern
    //passes the integer argument b
    return 0;
}
