#include<iostream>
using namespace std;

int reverseArray(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
        arr[i] = arr[i] + arr[n-i-1];
        arr[n-i-1] = arr[i] - arr[n-i-1];
        arr[i] = arr[i] - arr[n-i-1];
    }
    
}


int main()
{   
    cout << "Reverse The Array \n";
    int size;
    cout << "Enter size of array \n";
    cin >> size;
    int num[100];

    // taking input 
    cout << "Enter elements of array ";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    reverseArray(num,size);

    cout << "Reversed array ";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] <<" ";
    }

    return 0;
}