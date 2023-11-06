 #include <iostream>
 using namespace std;
 int main(){
 char oper;
 float num_1, num_2;
 cout<<"enter oper (+, -, *, /): ";
 cin>>oper;
 cout<<"enter first number : ";
 cin>>num_1;
 cout<<"enetr second number : ";
 cin>>num_2;
 
 switch(oper){
    case '+':
    cout<< num_1 << "+" << num_2 << "=" << num_1 + num_2;
    break;
    case '-':
    cout<< num_1 << "-" << num_2 << "=" << num_1 - num_2;
    break;
    case '*':
    cout<< num_1 << "*" << num_2 << "=" << num_1 * num_2;
    break;
     case '/':
    cout<< num_1 << "/" << num_2 << "=" << num_1 / num_2;
    break;
    default:
    cout<<"operator is not correct!";
     }
 }