#include <iostream>
using namespace std;
int main() {
    string str1;
    string str2;

    cin >> str1 >> str2;

    int arr[130];
    for(int i = 0; i < 130; i++)
        arr[i] = 0;

    for (int i = 0; i < str1.length(); i++)
        arr[str1[i]]++;

    for (int i = 0; i < str2.length(); i++)
        arr[str2[i]]--;

    for (int i = 0; i < 130; i++) {
        if (arr[i] != 0) {
            cout << "Not a permutation\n";
            return 0;
        }
    }

    cout << "Is a permutation\n";
}
