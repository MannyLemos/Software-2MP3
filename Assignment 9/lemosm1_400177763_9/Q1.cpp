//
//  main.cpp
//  Assignment9Question1
//
//  Created by Manny Lemos on 11/18/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a program in C++ to convert given distance from meters to kilometers using class.
//Use a default constructor to get the values of distance in meters from user.
//Create one more user defined function to convert and display the converted distance. (5%)

//general statements
#include <iostream>
using namespace std;

//class conversion delclared
class conversion
{
    public:
    float a; // Data members
    public:
    conversion() // default constructor start()
    {
        cout << "**Meter to Kilometer Conversion**\n";
        cout << "Input the distance in meters: ";
        cin >> a;
    }
    void display()
    {
        cout<<"The distance converted to \nkilometres is: "<<(a/1000)<<"km\n";
    }
};
int main()
{
    conversion var1;    // Object creation
    var1.display();   //
}
