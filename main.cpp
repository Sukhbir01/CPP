#include<iostream>
using namespace std;
// int main()
// {
//     cout << "Hello, World" << endl;
//     return 0;
// }

//  int main(){
//      int x;
//      cin>>x;
//      if(x%2==0){
//          cout<<"Even";

//      }
//      else{
//          cout<<"odd";
//      }

// return 0;
// }

 int main(){
    int n,count=0;
    cout<<"Enter a number: ";
    cin >> n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if (count==0)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    return 0;
 }