//Reverse a String.
//Print last character first and recurse for the rest.
#include <iostream>
using namespace std;

void reverseString(string str, int index) {
    if (index < 0)
        return;
    cout << str[index];
    reverseString(str, index - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    reverseString(s, s.length() - 1);
}

/*
Enter a string: hello
olleh
*/
