//Determine if a string has all unique characters

#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;

    int arr[130];
    for (int i = 0; i < 130; i++)
        arr[i] = 0;

    for (int i = 0; i < str.length(); i++)
        arr[str[i]]++;

    for (int i = 0; i < 130; i++) {
        if (arr[i] > 1) {
            cout << "Not unique\n";
            return 0;
        }
    }

    cout << "Unique\n";
}
