#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin >> m >> n;

    int grid[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    cout << "\n\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0) {
                //Column j = 0
                for (int k = 0; k < m; k++)
                    grid[k][j] = 0;

                for (int k = 0; k < n; k++)
                    grid[i][k] = 0;
                
            }
        }
    }

    cout << "\n\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

}
