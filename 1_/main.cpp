#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped = true;
    int j = 0;
    int temp;

    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
    }
}

int main() {
    const int size = 10;
    int arr[size];

    srand(time(nullptr));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Normal -> ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size);

    cout << "Sorted -> ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
