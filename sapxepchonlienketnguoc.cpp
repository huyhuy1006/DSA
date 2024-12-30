#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        int max_idx = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        std::swap(arr[i], arr[max_idx]);
        // In ra bu?c s?p x?p ngu?c
        std::cout << "Buoc " << i+1 << ": ";
        for (int k = 0; k < n; k++) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    selectionSort(arr, n);

    return 0;
}

