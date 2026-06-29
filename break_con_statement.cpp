#include<iostream>
using namespace std;

int main(){
    // for(int i = 1; i <= 40; i++)
    // {
    //     if(i == 11){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    // for(int i = 1; i <= 100; i++)
    // {
    //     if(i == 50){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    /*PRACTICE-QUESTION*/
    //Q-1
    // for(int petrolpump = 0; petrolpump <= 200; petrolpump++)
    // {
    //     if(petrolpump == 119){
    //         cout<<"1 ltr Petrol is done and please pay this scanner or cash"<<endl;
    //         break;
    //     }
    //     cout<<petrolpump<<endl;
    // }

    //Q-2
    // int i = 0;
    // while(i < 11){
    //     cout<<i<<endl;
    //     i++;
    //     if(i < 5){
    //         continue;;
    //     } 
    //     else if(i > 8){
    //         break;
    //     }
    // }

    //Q-3
    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
        if(i == 10){
            break;
        }
    }while(i < 20);

    
    return 0;
}
