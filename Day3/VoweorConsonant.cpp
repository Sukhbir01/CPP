#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter a Character: ";
    cin>>n;
    if(n =='a'|| n == 'e' || n =='i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}
