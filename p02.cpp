//Sum of First N Natural Numbers.

#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is: " << sum(n);
}
/*
output
Enter a number: 5
Sum of first 5 numbers is: 15
*/
