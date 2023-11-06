#include<iostream>
using namespace std;
int main(){
int mother;
char father;
    cout<<"Mother's blood group is -" <<endl;
    cout<<"Enter father's blood group(+ or -): ";
    cin>> father;
    switch(father){
        case '+':
        cout<<"The feotous in the warm of mother is caused by a severe disease named Erthroblastisfeotalou."<< endl << "This condition is maked by subsiquent pregnancy";
        break;
        case '-':
        cout<<"Healthy baby";
        break;
        case 'p':
        cout<<" Administration of anti Rh antibody during the dilevery of first child";
        break;
        default:
        cout<<"bye sir";
    }
}  