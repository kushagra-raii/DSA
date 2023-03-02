#include<iostream>
using namespace std;

bool checkKey(int n){
    int num[9] = {12,45,62,-85,32,26,78,9,15};
    for (int i = 0; i < 9; i++)
    {
        if (num[i]==n)
        {
            return true;
        }
        
    }
    return false;
}

int main(){
    int key;
    cout << "Enter key : ";
    cin >> key;
    
    bool verification = checkKey(key);

    if(verification){
        cout << "Key found";
    }
    else
    {
        cout<<"key not found";
    }
    
}