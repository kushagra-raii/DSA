#include<iostream>
using namespace std;

int power(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans = ans * a;
    }
    return ans;
}

void isEven(int a) {
    if (a % 2 == 0) {
        cout << a << " = Even" << endl;
    } else {
        cout << a << " = Odd" << endl;
    }
}

int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int ans = power(a, b);
    int ans2 = power(b, a);

    cout << "a raise to b = " << ans << endl;
    cout << "b raise to a = " << ans2 << endl;

    cout << "a is ";
    isEven(a);
    cout << "b is ";
    isEven(b);

    return 0;
}
