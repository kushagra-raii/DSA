#include<iostream>

using namespace std;

int main( )
{
    int n,store,ans=0,mul=1;
    cin >> n;
    while (n!=0)
    {
        store = (n&1);
        
        ans = (store * mul)+ans;
        mul*=10;
        n=(n>>1);


    }
    cout << ans <<endl;
    return 0;
}