#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

int findMax(int array[], int size);
int findMin(int array[], int size);
void reverseArray(int array[], int size);
int findSum(int array[], int size);
void countChar1(std::string& str);
void isPalindrome(const std::string& str);
void countChar2(std::string& str);
void findTarget(int array[], int size, int target);

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = findMax(arr, n);

    std::cout << "The max value is: " << maxVal;
    std::cout << "\n";

    int minVal = findMin(arr, n);

    std::cout << "The min value is: " << minVal;
    std::cout << "\n";

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    };

    int total = findSum(arr, n);

    std::cout << "The sum is: " << total;

    std::string str = "hello world";

    countChar1(str);

    std::string str = "boob";
    isPalindrome(str);

    std::string str = "hellllooooo";

    countChar2(str);

    int tar = 5;
    findTarget(arr, n, tar);
}

int findMax(int array[], int size) {
    int max = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    };

    return max;
}

int findMin(int array[], int size) {
    int min = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        };
    };

    return min;
}

void reverseArray(int array[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        std::swap(array[left], array[right]);
        left++;
        right--;
    };
}

int findSum(int array[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    };

    return sum;
}

void countChar1(std::string& str) {
    std::unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    };

    for (auto& pair : freq) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    };
}

void isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    bool isPal = true;

    while (left < right) {
        if (str[left] != str[right]) {
            isPal = false;
            break;
        };
        left++;
        right--;
    };

    if (isPal) {
        std::cout << "true";
    } else {
        std::cout << "false";
    };
}

void countChar2(std::string& str) {
    std::map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    };

    for (auto& pair : freq) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
}

void findTarget(int array[], int size, int target) {
    bool found = false;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            found = true;
            index = i;
            break;
        };
    }

    if (found) {
        std::cout << "The target is at index: " << index;
    } else {
        std::cout << "Target not found!";
    }
}