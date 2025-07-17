#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0],min = arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    for(int k=0;k<n;k++){
        if(arr[k]<min){
            max = arr[k];
        }
    }
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min;
    return 0;
}