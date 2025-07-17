#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],secondlar=0;
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0],index;
    for(int j=0;j<n;j++){
        if(arr[j]>max){
            max = arr[j];
            index=j;
        }
    }
    int max2 = 0;
    arr[index]=0;
    for(int j=0;j<n;j++){
        if(arr[j]>max2){
            secondlar = arr[j];
        }
    }  
    cout<<"Second Largest: "<<secondlar;
    return 0;
}