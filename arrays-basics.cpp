#include <iostream>

int main() {

    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // say the size of the first element is 4 bytes, so if we divide it to the total size of the array (which will be 20 bytes in this case) so we will get the total amount of elements in the array

    // finding the max element value of the array
    int maxVal = arr[0]; // we assume the first element is the max value
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        };
    };
    
    std::cout << "Max value in the array is: " << maxVal;
    std::cout << "\n";
    
    int minVal = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        };
    };
    
    std::cout << "Min value in the array is: " << minVal;
    std::cout << "\n";
    
    // finding sum of total elements from the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        // sum = sum + arr[i];
        sum += arr[i];
    };
    
    std::cout << "Total sum of the elements from the array: " << sum;
    
}