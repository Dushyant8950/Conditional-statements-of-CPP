#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter number 1 to 5 :";
    cin>>n;
    switch(n){
        case 1:
        cout<<"'When you have a dream, you've got to grab it and never let go.'";
        break;
        case 2:
        cout<<"'Nothing is impossible. The word itself says 'I' am possible!'";
        break;
        case 3:
        cout<<"'There is nothing is impossible to then whowill try.'";
        break;
        case 4:
        cout<<"'The bad news is time files. The good news is you're the pilot.'";
        break;
        case 5:
        cout<<"'Keep your face always toward the sunshine, and shadows will fall behind you.'";
        break;
        default:
        cout<<"'If you don't work hard you won't achieve anything.'";
     }
}