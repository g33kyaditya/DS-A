#include <iostream>
#include <cmath>
using namespace std;

void maxHeapify(int *arr, int n, int index) {
    if (index >= n/2)
        return;

    if (arr[2*index + 1] < arr[2*index + 2]) {
        //Right child is larger
        if (arr[index] < arr[2*index + 2]) {
            int temp = arr[index];
            arr[index] = arr[2*index + 2];
            arr[2*index + 2] = temp;
            maxHeapify(arr, n, 2*index + 2);
        }
    }
    else {
        //Left child is larger
        if (arr[index] < arr[2*index + 1]) {
            int temp = arr[index];
            arr[index] = arr[2*index + 1];
            arr[2*index + 1] = temp;
            maxHeapify(arr, n, 2*index + 1);
        }
    }
}

void BuildHeap(int *arr, int n) {
    
    for (int i = (n/2)-1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

void heapSort(int * arr, int size, int total) {
    while (size > 1) {
        size--;
        if (size == 1) {
            if (arr[0] < arr[1]) {
                int temp = arr[0];
                arr[0] = arr[1];
                arr[1] = temp;
            }
        }
        else {
            int temp = arr[0];
            arr[0] = arr[size];
            arr[size] = temp;
            cout << arr[size] << "  ";
            maxHeapify(arr, size - 1, 0);
        }
    }
    cout << arr[0] << "  " << arr[1];
}

int main() {
    
    int n;
    cout << "Enter the number of elements you want: ";
    cin >> n;
    int size = pow(2, ceil(log2(n)));
    int arr[size-1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n; i < size-1; i++)
        arr[i] = -1;

    cout << "The array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n\n";
    BuildHeap(arr, size-1);
    
    cout << "The Max Heap is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n\n";

    cout << "The sorted order is...\n";
    heapSort(arr, n, size-1);
    cout << "\n";

}
