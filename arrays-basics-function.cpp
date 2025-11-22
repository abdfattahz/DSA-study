#include <iostream>

int findMax(int arr[], int size);
int findMin(int arr[], int size);
int findSum(int arr[], int size);

int main() {
    int array[] = {5, 2, 9, 1, 7};
    int n = sizeof(array) / sizeof(array[0]);

    int maxValue = findMax(array, n);

    std::cout << "The max value is: " << maxValue;
    std::cout << "\n";

    int minValue = findMin(array, n);

    std::cout << "The min value is: " << minValue;
    std::cout << "\n";

    int total = findSum(array, n);

    std::cout << "The sum is: " << total;
    std::cout << "\n";
}

int findMax(int arr[], int size) {
    int maxVal = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        };
    };

    return maxVal;
}

int findMin(int arr[], int size) {
    int minVal = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    };

    return minVal;
}

int findSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}