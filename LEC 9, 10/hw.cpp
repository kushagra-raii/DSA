// initialize entire array with any number.
// input = size     elements   output sum of all elements


#include<iostream>
using namespace std;

int sumArray(int num[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    return sum;
    

}

int main()
{   
    cout << "Sum The Values of an Array \n";
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

    cout << "Sum = " << sumArray(num,size);

}