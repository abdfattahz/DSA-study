#include <vector>
#include <iostream>

int main() {

    // vector push_back 
    std::vector<int> nums = {5, 2, 9, 1, 7};
    size_t n = nums.size();

    // finding max value
    int maxVal = nums[0];

    for (size_t i = 0; i < n; i++){
        if (nums[i] > maxVal) {
            maxVal = nums[i];
        }
    };
    
    std::cout << "The max value is: " << maxVal;
    std::cout << "\n";
    
    // finding the min value
    int minVal = nums[0];

    for (size_t i = 0; i < n; i++) {
        if (nums[i] < minVal) {
            minVal = nums[i];
        }
    };
    
    std::cout << "The min value is: " << minVal;
    std::cout << "\n";

}