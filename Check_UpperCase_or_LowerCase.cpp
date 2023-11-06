#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character :";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Lower Case Alphabet";
    }else if ( ch >= 'A' && ch <= 'Z'){
        cout<<"Upper Case Alphabet";
    }else {
        cout<<"NOT an Alphabet";
    }
}