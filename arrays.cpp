#include<iostream>
using namespace std;

int main(){
    int marks[4] = {56, 45, 67, 98};
    int i = 0;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //You can change the value
    // cout<<"This are python marks"<<endl;
    // int pythonMarks[4] = {11, 12, 13, 14};
    // pythonMarks[1] = 20;
    // cout<<pythonMarks[0]<<endl;
    // cout<<pythonMarks[1]<<endl;
    // cout<<pythonMarks[2]<<endl;
    // cout<<pythonMarks[3]<<endl;

    //This que. using a For loop
    // cout<<"For loop"<<endl;
    // for(int i = 0; i < 4; i++){
    //     cout<<marks[i]<<endl;
    // }
    
    cout<<"while loop"<<endl;
    // This que. using a while loop
    // while(i < 4){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    
    //This que. using a do-while loop
    cout<<"do-while loop"<<endl;
    do
    {
        cout<<marks[i]<<endl;
        i++;
    }while(i < 4);

    return 0;
}

