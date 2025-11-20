#include <iostream>
#include <string>
using namespace std;

// -------------------- Solution 1 --------------------
class Solution1 {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int len = 1; len <= n / 2; len++) {
            if (n % len != 0) continue; 
            
            string pattern = s.substr(0, len);
            bool match = true;

            for (int i = len; i < n; i++) {
                if (s[i] != pattern[i % len]) {
                    match = false;
                    break;
                }
            }

            if (match) return true; 
        }

        return false; 
    }
};

// -------------------- Solution 2 --------------------
class Solution2 {
public:
    string uniqueChars(string str) {
        string result;
        bool found;

        for (int i = 0; i < str.length(); i++) {
            found = false;

            for (int j = 0; j < result.length(); j++) {
                if (str[i] == result[j]) {
                    found = true;
                    break;
                }
            }

            if (found) continue;

            result += str[i];
        }

        return result;
    }
};

// -------------------- Main --------------------
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    //  Solution 1
    Solution1 sol1;
    if (sol1.repeatedSubstringPattern(str)) {
        cout << "Solution 1: The string can be made by repeating a substring.\n";
    } else {
        cout << "Solution 1: The string cannot be made by repeating a substring.\n";
    }

    //  Solution 2
    Solution2 sol2;
    string unique = sol2.uniqueChars(str);
    cout << "Solution 2: Unique characters in the string: " << unique << endl;

    return 0;
}
