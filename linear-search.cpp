#include <iostream>

int main() {

    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    bool found = false;
    int index = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        };
    };
    
    if (found) {
        std::cout << "Found at index: " << index;
    } else {
        std::cout << "Not found!";
    }

}