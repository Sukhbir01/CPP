#include<iostream>
using namespace std;
int main(){
int n,sum=0,digit=0;
cout<<"Enter a number: ";
cin>>n;
for (int i=0;i<=n;i++){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
}
cout<<"Sum of digits: "<< sum;
return 0;
}