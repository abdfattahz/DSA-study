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
    
    // finding the sum
    int sum = 0;

    for (size_t i = 0; i < n; i++) {
        // sum = sum + nums[i];
        sum += nums[i];
    };
    
    std::cout << "The sum is: " << sum;
    std::cout << "\n";
    
    // normal vector array
    std::cout << "The normal array is: ";

    for (size_t i = 0; i < n; i++) {
        std::cout << nums[i] << " ";
    };
    
    std::cout << "\n";

    // reversing the vector array
    int left = 0;
    int right = n - 1;

    while (left < right) {
        std::swap(nums[left], nums[right]);
        left++;
        right--;
    };
    
    std::cout << "The reversed array is: ";
    
    for (size_t i = 0; i < n; i++) {
        std::cout << nums[i] << " ";
    };
    
    std::cout << "\n";
    
    // linear search
    bool found = false;
    int index = -1;
    int target = 7;
    
    for (size_t i = 0; i < n; i++) {
        if (nums[i] == target) {
            found = true;
            index = i;
            break;
        }
    };
    
    if (found) {
        std::cout << "The target is at index: " << index;
    } else {
        std::cout << "Target not found!";
    }

}