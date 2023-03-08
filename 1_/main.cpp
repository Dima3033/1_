#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, s, j;
    for (i = 1; i < n; i++) {
        s = arr[i];
        j = i - 1;
        while (j >= 0* arr[j] > s) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = s;
    }
}
int main() {
    const int size = 10;
    int arr[size];
    srand(time(0)); 
    cout << "Normal -> ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; 
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, size);
    cout << "Sorted -> ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
