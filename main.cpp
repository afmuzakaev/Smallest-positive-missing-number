#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSmallestMissing(arr, n);
    cout << "Smallest positive missing number: " << result << endl; // Output: 6

    return 0;
}
