#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[],int n){
    int maxInt = INT_MIN;
    for(int i = 0;i<n;i++){
        if (maxInt < arr[i])
        {
            maxInt = arr[i];
        }
        
    }
    return maxInt;

}


int getMin(int arr[],int n){
    int minInt = INT_MAX;
    for(int i = 0;i<n;i++){
        if (minInt > arr[i])
        {
            minInt = arr[i];
        }
        
    }
    return minInt;

}


int main()
{
    int size;
    cout << "Enter size of array \n";
    cin >> size;
    int num[100];

    // taking input 
    cout << "Enter elements of array";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value =" << getMax(num,size);
    cout << "\nMinimum value =" << getMin(num,size);

    
    return 0;
}
