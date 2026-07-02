// #include<iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int num1, num2;
//     cout<<"Enter first number : "<<endl;
//     cin>>num1;
//     cout<<"Enter second number : "<<endl;
//     cin>>num2;
//     cout<<"The sum is  : "<<sum(num1, num2)<<endl;
    
//     return 0;
// }

// //Practice-que
// #include<iostream>
// using namespace std;
// int multiply(int a, int b)
// {
//     int c = a * b;
//     return c;
// }

// int main()
// {
//     int no1, no2;
//     cout<<" Enter the value : "<<endl;
//     cin>>no1;
//     cout<<"Enter the value : "<<endl;
//     cin>>no2;
//     cout<<"Multiply is : "<<multiply(no1, no2)<<endl;

//     return 0;
// }

//Practice-que
#include<iostream>
using namespace std;

string name(string x, string y)
{
    string username = x + " " + y;

    return username;
}

int main()
{
    string first1, second2;

    cout<<"Enter your first name : "<<endl;
    cin>>first1;
    cout<<"Enter your second name : "<<endl;
    cin>>second2;
    cout<<"Your Username : "<<name(first1, second2)<<endl;

    return 0;
}