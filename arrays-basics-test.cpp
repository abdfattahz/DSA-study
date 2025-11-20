#include <iostream>

int main() {

    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // finding the max value of the element inside an array
    int maxVal = arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        };
    };
    
    std::cout << "Max element value in the array is: " << maxVal;
    std::cout << "\n";
    
    // finding the min value of the element inside an array
    int minVal = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        };
    };
    
    std::cout << "Min element value in the array is: " << minVal;
    std::cout << "\n";
    
    // finding the sum of elements value
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    std::cout << "Sum of the elements from the array is: " << sum;
    std::cout << "\n";
    
    // reversing the array
    int left = 0;
    int right = n - 1;

    std::cout << "The normal value of the array is: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    };
    
    std::cout << "\n";

    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    };
    
    std::cout << "The reversed value of the array is: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    };

}