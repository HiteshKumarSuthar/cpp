// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
// CONSTANT
//     const int A = 10; // constant value
//     // A = 11;
//     cout<<"This value is const. : "<<A<<endl;

//     Manipulators in C++
//     int a = 1, b = 23, c = 234, d = 1234;
//     cout<<"The value of a without setw is : "<<a<<endl;
//     cout<<"The value of b without setw is : "<<b<<endl;
//     cout<<"The value of c without setw is : "<<c<<endl;
//     cout<<"The value of d without setw is : "<<d<<endl;

//     cout<<endl;

//     cout<<"The value of a with setw : "<<setw(4)<<a<<endl;
//     cout<<"The value of b with setw : "<<setw(4)<<b<<endl;
//     cout<<"The value of c with setw : "<<setw(4)<<c<<endl;
//     cout<<"The value of d with setw : "<<setw(4)<<d<<endl;

//     //Operator Precedence 
//     int a = 5, b = 15;
//     // int c = (a*b)+b;
//     int c = ((((a*b)+b)-11)+44);
//     cout<<c;


//     return 0;
// }


//Practice-Que.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout<<setfill('*')<<setw(5)<<11<<endl; // spce ki jagah * laga dena using by setfill
    cout<<left<<setw(10)<<"Hitesh"<<endl; // object ho left set kr dega


    return 0;
}