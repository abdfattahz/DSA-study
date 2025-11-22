#include <iostream>
#include <unordered_map>

void countChar(const std::string& str);

int main() {
    std::string str = "hello world";
    countChar(str);
}

void countChar(const std::string& str) {
    // create unordered_map to store the frequency of each character
    // this is a kay-value pair
    // for this case, key is char (which is a character)
    // while value is int (which is the count of occurences of the character)
    std::unordered_map<char, int> freq;  // so 'freq' will be the hash map here
                                         // where each char is a key
                                         // and the frequency of that character
                                         // is stored as the value (in int)

    // Traverse the string and count the occurences of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // printout the result
    for (const auto& pair : freq) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
}