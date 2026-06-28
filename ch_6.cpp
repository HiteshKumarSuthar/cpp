#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Tell me your age :"<<endl;
    cin>>age;

    //Selection control structure (if else-if else)
    // if((age<18) && (age>0)){
    //     cout<<"You can not come my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
    

    //Selection control structure : Switch case
    switch (age)
    {
        case 18:
        cout<<"You are in 18"<<endl;
        break;

        case 11:
        cout<<"Your are in 11"<<endl;
        break;

        case 22:
        cout<<"You are in 22"<<endl;
        break;

        default:
        cout<<"Your age is not this listed"<<endl;
    }

    cout<<"Done are all cases in switch cases";

    return 0;
}