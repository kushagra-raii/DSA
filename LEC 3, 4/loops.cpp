#include<iostream>
using namespace std;
int main()
{
    // While
    // int sum = 0,a=0;
    int n;
    cin >> n;
    // while (a<n)
    // {
    //     sum = sum + a;
    //     a=a+2;
    // }
    // cout << sum<<endl;

    int i = 1; 
    while (i<=n)
    {   
        int j = 1;
        while (j<=i)
        {
            cout << (i - j)+1 ;
            j++;
        
        }
        cout<<"\n";
        i++;
    }
    
    int x = 1; 
    while (x<=n)
    {   
        int y = 1;
        while (y<=x)
        {
            // char k = 'A'+(x + y)-2 ;
            char k = n - x+ y + ('A'-1);

            cout << k ;
            y++;
        
        }
        cout<<"\n";
        x++;
    }
    

    return 0;


}
