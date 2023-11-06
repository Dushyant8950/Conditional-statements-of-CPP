#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number :";
    cin>>x;
    if(x > 99 && x < 1000){
        cout<<"Yes, It is three digit number";
    }else{
        cout<<"No, It is not a three digit number";
    }
}