#include <vector>
#include <iostream>

int main() {

    // vector push_back 
    std::vector<int> nums;
    
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(12);
    
    size_t n = nums.size();

    std::cout << "The second element is: " << nums[1] << "\n";
    std::cout << "The size of the array is: " << n;

}