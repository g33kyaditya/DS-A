//An array that doubles when it is filled

#include <iostream>
using namespace std;
int main() {
    
    int initialSize;
    cout << "What should the initial size of the array be ( > 0 ) : ";
    cin >> initialSize;
    int * array = new int[initialSize];
    int count = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y') {
        int num;
        cin >> num;
        array[count++] = num;
        if (count == initialSize) {
            //Expand
            int * temp = new int[2*initialSize];
            initialSize = 2*initialSize;

            for (int i = 0; i < initialSize; i++) {
                temp[i] = array[i];
            }
            
            delete [] array;
            array = temp;
        }
        cout << "Want to input more ?\n";
        cin >> ch;
    }
    
    cout << "The Array is ...\n";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}
