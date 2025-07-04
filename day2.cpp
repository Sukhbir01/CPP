#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cout<<"Enter two no. "<<endl;
    cin>>a>>b;
    cout<<"Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for Multiplation\nEnter 4 for Division"<<endl;
    cout<<"Enter a choice from 1 to 4: ";
    cin>>n;
    switch(n){
        case 1:cout<<a+b<<endl;
        break;
        case 2:cout<<a-b<<endl;
        break;
        case 3:cout<<a*b<<endl;
        break;
        case 4:cout<<a/b<<endl;
        break;
        default:
        cout<<"Invalid choice";
    }
}