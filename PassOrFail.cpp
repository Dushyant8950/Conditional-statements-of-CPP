#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    marks>=37 && marks<=100 ? cout<<"pass" : cout<<"fail";
}