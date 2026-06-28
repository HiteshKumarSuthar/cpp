//Operator in C++
/*#include = Header file ko program me include karna.
iostream = Input (cin) + Output (cout) ki facilities dene wali header file.
Header file = Ready-made code ka collection, jise hum apne program me use karte hain.*/

#include <iostream>
using namespace std;

int main() {
    // int a=4, b=5;
    
    // //Arithmetic Operators
    // cout<<"The value is a+b : "<<a+b<<endl;
    // cout<<"The value is a-b : "<<a-b<<endl;
    // cout<<"The value is a*b : "<<a*b<<endl;
    // cout<<"The value is a/b : "<<a/b<<endl;
    // cout<<"The value is a%b : "<<a%b<<endl;
    // cout<<"The value is a++ : "<<a++<<endl; //Actual print value is - 4 but real value is - 5
    // cout<<"The value is a-- : "<<a--<<endl; //Actual print value is - 5 but real value is - 4
    // cout<<"The value is ++a : "<<++a<<endl; //First is value increment and then print value is - 5
    // cout<<"The value is --a : "<<--a<<endl; //First is value decrement and then print value is - 4

    
    //Assignment Operators
    int a=3, b=4;
    char e='e';
    cout<<"The value of a is : "<<a<<endl;


    //Comparison Operators
    cout<<"Following are the assignment operators in C++"<<endl;
    cout<<"The value of a==b is : "<<(a==b)<<endl;
    cout<<"The value of a!=b is : "<<(a!=b)<<endl;
    cout<<"The value of a>=b is : "<<(a>=b)<<endl;
    cout<<"The value of a<=b is : "<<(a<=b)<<endl;
    cout<<"The value of a>b is : "<<(a>b)<<endl;
    cout<<"The value of a<b is : "<<(a<b)<<endl;

    cout<<endl;
    
    //Logical Operators
    cout<<"Following are the logocal operators in C++"<<endl;

    cout<<"The value is logical AND operator ((a==b) && (a<b)) : "<<((a==b) && (a<b))<<endl; //AND
    cout<<"The value is logical OR operator ((a==b) || (a<b)) : "<<((a==b) || (a<b))<<endl; //OR
    cout<<"The value is logical operator (!(a==b)) : "<<(!(a==b))<<endl; //NOT EQUAL TO

    return 0;
}
