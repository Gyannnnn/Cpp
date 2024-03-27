#include<algorithm>
#include<iostream>
using namespace std;
int maxnumber(int nums[], int n){
    return *max_element(nums,nums+n);
}
int main(){
    int s,i;
    cout<<"Enter The Size Of The Array"<<endl;
    cin>>s;
    int nums[s];
    cout<<"Enter The Value Of The Arrays"<<endl;
    for ( i = 0; i < s; i++)
    {
        cin>>nums[i];

    }
    cout<<"Entered Arry is ->>>"<<endl;
    for(i=0;i<s;i++){
        cout<<nums[i];
        cout<<endl;
    }
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<"The Maximum Number In The Enterer Array Is ->"<<" "<<maxnumber(nums,n);


}