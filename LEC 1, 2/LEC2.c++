#include<iostream>
using namespace std;
int main()
{ 
    // output And Sizeof
    cout << "Namaste Dunia :-)"<<endl;
    cout << "Namaste Dunia :-)"<<'\n';
    cout << "Namaste Dunia :-) \n";

    int a = 123;
    cout << a << endl;
    int size = sizeof(a);
    cout << "Size of a is " << size << endl; 

    // Typecast
    int c = 'c';
    cout << "c = "<< c <<endl;
    char b = 98;
    cout << "b = " << b<<endl;

    char ch = 123456;
    cout << "ch "<< ch << endl;

    // Unsigned - by default its signed

    unsigned pos = 112;
    unsigned neg = -112;

    cout << "pos = "<< pos << " neg = "<<neg<<endl;
    
    return 0;
}
