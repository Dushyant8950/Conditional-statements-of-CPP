#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number :";
    cin>>x;
    if (x % 5 == 0 && x % 3 == 0){
        cout<<"number is divisible by 5 and 3";
    }else{
        cout<<"number is not divisible by 5 and 3";
    }
}

//PROPERTIES:
//(1): TRUE && TRUE = TRUE
//(2): TRUE && FALSE = FALSE
//(3): FALSE && TRUE = FALSE
//(4): FALSE && FALSE = FALSE