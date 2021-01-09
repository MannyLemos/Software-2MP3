//
//  main.cpp
//  Assignment9Question4
//
//  Created by Manny Lemos on 11/16/19.
//  Copyright © 2019 Manny Lemos. All rights reserved.
/* Write a program in C++ to implement multiple inheritance.
Create a base class CAR, having data members:
    model  and  price  of the car and two member functions to get the values of data members and display them respectively.
Create another base class TRUCK, having data members:
    Model, color and price of the truck and
        having member functions to get the values of user of datamembers and display them.
 Create third class SALES derived from classes CAR and TRUCK.
    SALES class having No data members in it, but member function CALL to call the functions of its base classes.
 Note: Only derived class has an object. Data members must be private and member functions must be public. You can use any name for members of all three classes.
*/

//general statements
#include <iostream>
#include <iomanip>
using namespace std;

class CAR
{
private : // Three types access specifier: public, private, protected
    string model = "CFL652abcdefg";
    float price = 25765.26;

public :
    //to get the value of the users origanal input
    string getModel()
    {
        cout<<"The model number of this car is: "<<model<<"\n";
        return model;
    }
    
    //to get the value of product
    float getPrice()
    {
        cout<<"The price of this car is: $"<<price<<"\n";
        return price;
    }
};

class TRUCK
{
private : // Three types access specifier: public, private, protected
    string model = "TFL652abcdefg";
    string colour = "RED";
    float price = 31976.88;

public :
    //to get the value of the users origanal input
    string getModel()
    {
        cout<<"The model number of this truck is: "<<model<<"\n";
        return model;
    }
    
    string getColour()
       {
           cout<<"The colour of this truck is: "<<colour<<"\n";
           return colour;
       }
    
    //to get the value of product
    float getPrice()
    {
        cout<<"The price of this truck is: $"<<price<<"\n";
        return price;
    }
};

class SALES: public CAR, public TRUCK
{
    void CALL()
    {
        CAR var1;
        var1.getModel();
        var1.getPrice();
        TRUCK var2;
        var2.getModel();
        var2.getColour();
        var2.getPrice();
    }
};

int main()
{

}

