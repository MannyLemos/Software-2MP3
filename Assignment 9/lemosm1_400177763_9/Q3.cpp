//
//  main.cpp
//  Assignment9Question3
//
//  Created by Manny Lemos on 11/16/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
//Write a program in C++ using class to find the product of digits of the given number.(5%)
//Input:
    //Enter Number: 453
//Output:
    //The product of the digits of 453 is: 60
//Note: Use default constructor to initialize data members with zero and parameterized constructer to get the value of a number from user.

//general statements
#include <iostream>
using namespace std;

//class named componenet declared
class component
{
//public variables
public:
    int num, product, proxy;

    //non returning default constructor declared
    //this  doesnt end up  doing anything?
    component()
    {
        //num will eventually hold user input
        num = 0;
        //product will hold the final anwser
        product = 1;
        //I want to retain origanal value the user enters so an additional
        //variable is used to make manipulations to the user input
        proxy = 0;
    }
    
    //non returning parameterized contructor is declared
    //it is passed user input
    component(int userNum)
    {
        num = userNum;
    }
    
    //non returning default constructor is declared
    void calculate()
    {
        //product = 1;
        proxy = num;
        //simple while loop
        while(proxy != 0)
           {
               //product is manipulated
               product *= (proxy % 10);
               //increment or decrement
               proxy /= 10;
           }
    }
    
    //to get the value of the users origanal input
    int getNum()
    {
        return num;
    }
    
    //to get the value of product
    int getProduct()
    {
        return product;
    }
};

int main()
{
    int userNum; //variable to store user input
    cout<<"Enter an integer number: ";
    cin>>userNum; //takes user input, stores it in userNum
    component var1(userNum); // Object creation
    var1.calculate(); //runs calculate()
    cout<<"The product of the digits of "<< var1.getNum() <<" is: "<<var1.getProduct()<<"\n"; //final output statement
}




