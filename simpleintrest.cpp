#include<iostream>
using namespace std;
int main(){
    float principle,rate,time,simpleintrest;
    cout<<"Enter Principle"<<endl;
    cin>>principle;
    cout<<"Enter Your Rate"<<endl;
    cin>>rate;
    cout<<"Enter Your Time "<<endl;
    cin>>time;
    simpleintrest = (principle*rate*time)/100;
    cout<<"Required Simple Intrest Is"<<" "<<simpleintrest;
}
// simple intrest formula = (principle*rate*time)/100