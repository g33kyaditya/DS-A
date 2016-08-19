#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;

    string ans = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[i+1]) {
            count++;
        }
        else {
            int total = count + 1;
            count = 0;
            ans = ans + str[i] + std::to_string(total);
        }
    }
    if (ans.length() < str.length())
        cout << ans << "\n";
    else
        cout << str << "\n";
}

