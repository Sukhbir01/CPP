#include<iostream>
using namespace std;
int main(){
    int n,temp=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int j=0;j<n/2;j++){
        temp = arr[j];
        arr[j] = arr[n - j - 1];
        arr[n - j - 1] = temp;
    }
    for (int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}