#include <iostream>
using namespace std;
int main(){
int marks;
cout<<"enter marks:";
cin>>marks;
if(marks>=80 && marks<=100){
    cout<<"excelent";
}else if(marks>=65 && marks<80){
    cout<<"very good";
}else if(marks>=48 && marks<65){
    cout<<"good";
}else if(marks>=37 && marks<48){
    cout<<"average";
}else{
    cout<<"fail";
}
}
