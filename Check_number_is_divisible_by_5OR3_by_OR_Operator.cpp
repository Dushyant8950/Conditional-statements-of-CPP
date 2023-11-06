#include<iostream>
using namespace std;
int main(){
     int x;
    cout<<"enter number :";
    cin>>x;
    if (x % 5 == 0 || x % 3 == 0){
        cout<<"number is divisible by 5 or 3";
    }else{
        cout<<"number is not divisible by 5 or 3";
    }
}

//PROPERTIES:
//(1): TRUE && TRUE = TRUE
//(2): TRUE && FALSE = TRUE
//(3): FALSE && TRUE = TRUE
//(4): FALSE && FALSE = FALSE