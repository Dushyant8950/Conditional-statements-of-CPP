#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st number :";
    cin>>a;
    cout<<"enter 2nd number :";
    cin>>b;
    cout<<"enter 3rd number :";
    cin>>c;
    if (a>b && a>c){
        cout<<a <<":1st no. is greatest";
    }else if (b>a && b>c){
        cout<<b <<":2nd no. is greatest";
    }else{
        cout<<c <<":3rd no. is greatest";
    }
}
