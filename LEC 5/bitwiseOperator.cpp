#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~a) << endl;
    cout << (a ^ b) << endl;


    // left and right shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;


    cout << (17 << 1) << endl;
    cout << (17 << 2) << endl;

    //observation = right shift divides with 2 left shift multiplies 2 (valid for small no. only).
    // padding = 0 for positive and for negative its compiler dependent.


    return 0;
}
