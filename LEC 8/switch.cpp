#include<iostream>
using namespace std;
int main()
{
    int a , b ;
    char op;
    cout << "Enter a"<<endl;
    cin >> a ; 
    cout << "Enter b"<<endl;
    cin >> b ;
    cout << "Enter operator(+-*/%)"<<endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl; 
        break;
    case '-':
        cout << a + b << endl; 
        break;
    case '*':
        cout << a + b << endl; 
        break;
    case '/':
        cout << a + b << endl; 
        break;
    case '%':
        cout << a + b << endl; 
        break;
    
    default: cout << "fill valid operator";
        break;
    }


    return 0;
}
