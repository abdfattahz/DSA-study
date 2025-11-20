#include <iostream>

int main() {

    int arr[] = {5, 2, 1, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    bool found = false;
    int index = -1;

    // finding max value
    int maxVal = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        };
    };
    
    std::cout << "The max value is: " << maxVal;
    std::cout << "\n";
    
    // finding min value
    int minVal = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        };
    };
    
    std::cout << "The min value is: " << minVal;
    std::cout << "\n";
    
    // finding sum value
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    };
    
    std::cout << "The sum is: " << sum;
    std::cout << "\n";
    
    std::cout << "The normal array is: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    };
    
    std::cout << "\n";

    // reversing the array
    int left = 0;
    int right = n - 1;
    
    std::cout << "The reversed array is: ";

    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    };
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    };
    
    std::cout << "\n";
    
    // linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        };
    };
    
    if (found) {
        std::cout << "The target is at index: " << index;
    } else {
        std::cout << "The target is not found!";
    }

}