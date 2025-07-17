#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array:\n";
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    for(int j = 0;j < n - 1;j++)
    {
        for(int k = 0;k < n - j - 1;k++)
        {
            if(arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    cout << "Second Largest Element: " << arr[n - 2] << endl;
    return 0;
}