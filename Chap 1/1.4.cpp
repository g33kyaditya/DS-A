#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main() {
    string str;
    getline(cin, str);
    vector< string > v;
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            string s = str.substr(j, i-j);
            v.push_back(s);
            j = i+1;
        }
        else if (i == str.length()-1) {
            string s = str.substr(j, i-j+1);
            v.push_back(s);
        }
    }
    string ans = "";
    j = 0;
    for (int i = 0; j < v.size(); i++) {
        if (i%2 != 0)
            ans = ans + "%20";
        else {
            ans = ans + v[j];
            j++;
        }
    }

    cout << ans << "\n";
}
