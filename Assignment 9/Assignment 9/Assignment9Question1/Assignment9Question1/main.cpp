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
//#include <iostream>
//using namespace std;
//
////class conversion delclared
//class conversion
//{
//    public:
//    float a; // Data members
//    public:
//    conversion() // default constructor start()
//    {
//        cout << "**Meter to Kilometer Conversion**\n";
//        cout << "Input the distance in meters: ";
//        cin >> a;
//    }
//    void display()
//    {
//        cout<<"The distance converted to \nkilometres is: "<<(a/1000)<<"km\n";
//    }
//};
//int main()
//{
//    conversion var1;    // Object creation
//    var1.display();   //
//}

//#include <iostream>
//using namespace std;
//class conversion
//{
//public:
//    float a;
//    conversion(){
//        cout<<"Input distance in m:";
//        cin>>a;
//    }
//    void display(){
//        cout<<"The distance converted is: "<<(a/1000)<<"km";
//    }
//};
//int main(){
//    conversion var;
//    var.display();
//}

//#include <iostream>
//using namespace std;
//class Draw
//{
//public:
//    //function declarations
//    void init_val(int v);
//};
////function definitions
//void Draw :: init_val(int v)
//{
//    int letter = v;
//    int i, k , j;
//    k = 4;
//    for (i=0;i<4;i++){
//        for (j=0;j<k;j++){
//            printf("%c ",letter);
//            letter += 2;
//        }
//        printf("\n");
//        k--;
//    }
//}
//
//int main()
//{
//    //create object
//    Draw Ex;
//    Ex.init_val(65);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//struct Digits
//{
//public:
//    void Product(int p){
//        int product = 1;
//        while (p != 0){
//            product *= p%10;
//            p = p/10;
//        }
//        cout<<"The product if digits is: "<<product;
//    }
//};
//
//int main(){
//    Digits var;
//    cout<<"Enter a value";
//    int a;
//    cin>>a;
//    var.Product(a);
//}

#include <stdio.h>
void func(int *ptr){
    int i;
    for (i=1;i<=5;i++)
    {
        printf("Array value %d: %d\n",i,*ptr);
        ptr++;
    }
}
int main(){
    int myarr[5] = {1,2,17,4,5};
    func(myarr);
}


