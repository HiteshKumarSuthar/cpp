/*----STRUCTURES (struct)----*/
// #include<iostream>
// using namespace std;

// typedef struct employee
// {
//     int eID;
//     string Domain;
//     char SDEtype;
//     float salary;
// } ep;

// int main(){
//     ep Hitesh;
//     Hitesh.eID = 11;
//     Hitesh.Domain = "DataScientist";
//     Hitesh.salary = 1500000;

//     cout<<"Hitesh"<<endl;
//     cout<<"The eID is : "<<Hitesh.eID<<endl;
//     cout<<"The Domain is : "<<Hitesh.Domain<<endl;
//     cout<<"The salary is : "<<Hitesh.salary<<endl;
    
//     return 0;
// }

//Struct-parctice-que
// #include<iostream>
// using namespace std;

// struct student //User-defined data type (struct)
// {
//     string name;
//     int age;
//     float marks;
// };
// int main(){
//     student s1; //Object (You can create multiple objects.)
//     s1.name = "Hitesh";
//     s1.age = 19;
//     s1.marks = 7.5;

//     cout<<"Name is : "<<s1.name<<endl;
//     cout<<"Age is : "<<s1.age<<endl;
//     cout<<"Marks is : "<<s1.marks<<endl;

//     student s2;
//     s2.name = "Hitesh";
//     s2.age = 19;
//     s2.marks = 7.5;

//     cout<<"Name is : "<<s2.name<<endl;
//     cout<<"Age is : "<<s2.age<<endl;
//     cout<<"Marks is : "<<s2.marks<<endl;

//     return 0;
// }


/*----UNION----*/
//A union in C++ is a user-defined data type in which all members share the same memory location. Only one member can hold a valid value at a time, making unions memory-efficient.

// #include<iostream>
// using namespace std;

// union money
// {
//     int ruppes;
//     char doller;
//     float pounds;
// };

// int main(){
//     union money m1;
//     m1.ruppes = 95;
//     m1.doller = 'D';
//     m1.pounds = 126.11;

//     cout<<"ruppes is : "<<m1.ruppes<<endl;
//     cout<<"doller is : "<<m1.doller<<endl;
//     // cout<<"pounds is : "<<m1.pounds<<endl;
//     return 0;
// }

//Union-practice-que

// #include<iostream>
// using namespace std;
// union data
// { 
//     int number;
//     float marks;
//     char  grade;
// };

// int main(){
//     data d;
//     d.number = 11;
//     cout<<"Number is : "<<d.number<<endl;

//     d.marks = 90;
//     cout<<"Marks is : "<<d.marks<<endl;

//     d.grade = 'A';
//     cout<<"Marks is : "<<d.marks<<endl; //Number ki value overwrite ho gyi aur ye output garbage ya unexpected ho skta hai.
//     cout<<"Grade is : "<<d.grade<<endl;

//     return 0;
// }


/*----ENUMS----*/
//An enum (enumeration) in C++ is a user-defined data type that defines a set of named integral constants, making code more readable and easier to maintain.
// #include<iostream>
// using namespace std;

// int main(){
//     enum Subject{python, java, react};
//     Subject s1 = react;
//     Subject s2 = python;
//     cout<<python<<endl;
//     cout<<s1<<endl;
//     cout<<s2;


//     return 0;
// }

//Enum-parctice-que


#include<iostream>
using namespace std;
enum program{
    python,
    java,
    html,
    css,
    react,
    data,
};
int main()
{
    program code = react;
    program mycode = python;
    cout<<code<<endl<<mycode;
    return 0;
}
