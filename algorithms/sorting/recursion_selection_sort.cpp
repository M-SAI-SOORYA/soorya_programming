#include <iostream>

void selectionSort(int arr[], int n, int r, int c, int max) {
    if (r == 0) {
        return;
    }
    if (r > c) {
        if (arr[max] < arr[c]) {
            selectionSort(arr, n, r, c + 1, c);
        } else {
            selectionSort(arr, n, r, c + 1, max);
        }
    } else {
        int temp = arr[max];
        arr[max] = arr[r - 1];
        arr[r - 1] = temp;
        selectionSort(arr, n, r - 1, 0, 0);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2};
    int n = 4; // Size of the array

    selectionSort(arr, n, n, 0, 0);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
