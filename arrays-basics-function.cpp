#include <iostream>

int findMax(int arr[], int size);
int findMin(int arr[], int size);
int findSum(int arr[], int size);
void reverseArray(int arr[], int size);
int linearSearch(int arr[], int size, int target);

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

    // normal array
    std::cout << "The normal array is: ";

    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    };

    std::cout << "\n";
    std::cout << "The reversed array is: ";

    reverseArray(array, n);

    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    };

    std::cout << "\n";

    linearSearch(array, n, 7);
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

void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    };
}

int linearSearch(int arr[], int size, int target) {
    bool found = false;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        };
    };

    if (found) {
        std::cout << "The target is at: " << index;
    } else {
        std::cout << "Target is not found";
    };

    return index;
}