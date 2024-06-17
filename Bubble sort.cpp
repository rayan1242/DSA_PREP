#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place, so we don't need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the current element is greater than the next element
            cout<<arr[j]<<" "<<arr[j+1]<<"\n";
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout<<arr[j]<<" "<<arr[j+1]<<"\n";
            }
        }
    }
}

int main() {
    int arr[] = { 1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

