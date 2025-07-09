#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a Character: ";
    cin>>c;
    if(isalpha(c)){
        cout<<"Alphabet";
    }
    else if(isdigit(c)){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
    return 0;
}