#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character :";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Yes, It is an alphabet";
    }else if (ch >= 'A' && ch <= 'Z' ) {
        cout<<"Yes, It is an alphabet";
    }else{
        cout<<"It is NOT an alphabet";
    }
}