//Find Power of a Number (aⁿ)
#include <iostream>
using namespace std;
int power(int a, int n) {
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}
int main() {
    int a, n;
    cout << "Enter base and power: ";
    cin >> a >> n;
    cout << a << "^" << n << " = " << power(a, n);
}


/*
output
Enter base and power: 2 5
2^5 = 32
*/
