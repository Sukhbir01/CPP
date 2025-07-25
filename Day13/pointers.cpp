#include<iostream>
using namespace std;
void addOne(int* p){
    (*p)++;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int *p=&n;
    cout<<"Addressn of n is: "<<p<<endl;
    cout<<"Value of Address of n is: "<<*p<<endl;
    cout<<"Value of number: "<<n<<endl;
    addOne(&n);
    cout<<"After function call: "<<n<<endl;
    return 0;
}