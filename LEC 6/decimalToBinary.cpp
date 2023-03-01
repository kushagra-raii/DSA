#include<iostream>
using namespace std;

int main( )
{
    int n,digit,ans=0,mul=1;
    cin >> n;
    while (n!=0)
    {
        digit = (n%10);
        ans = (digit * mul)+ans;
        mul*=2;
        n=n/10;


    }
    cout << ans <<endl;
    return 0;
}
