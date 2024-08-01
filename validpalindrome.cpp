#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    // Function to check if a character is alphanumeric
    bool valid(char ch) {
        return (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9');
    }

    // Function to convert an uppercase letter to lowercase
    char tolowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    // Function to check if a given string is a palindrome
    bool checkpalindrome(const string& s) {
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        // Create a new string with only alphanumeric characters in lowercase
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                temp.push_back(tolowercase(s[i]));
            }
        }
        // Check if the new string is a palindrome
        return checkpalindrome(temp);
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";

    cout << "Test case 1: \"" << test1 << "\" is ";
    cout << (solution.isPalindrome(test1) ? "a palindrome." : "not a palindrome.") << endl;

    cout << "Test case 2: \"" << test2 << "\" is ";
    cout << (solution.isPalindrome(test2) ? "a palindrome." : "not a palindrome.") << endl;

    cout << "Test case 3: \"" << test3 << "\" is ";
    cout << (solution.isPalindrome(test3) ? "a palindrome." : "not a palindrome.") << endl;

    return 0;
}
