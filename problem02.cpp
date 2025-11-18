#include <iostream>
#include <string>
using namespace std;

/// Solution 1: Checks if two strings are anagrams by comparing each character and marking used characters
bool solution1(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    bool flag = true;
    bool found = true;

    for (int i = 0; i < str1.length(); i++) {
        found = false;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '-';  // Mark character as used
                found = true;
                break;
            }
        }
        if (!found) {
            flag = false;
            break;
        }
    }

    return flag;
}

/// Another solution: Checks if two strings are anagrams using a frequency array for lowercase letters
bool anotherSolution(string s, string t) {
    if (s.length() != t.length())
        return false;

    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main() {
    string str1, str2;
    cout << "Enter string1: ";
    getline(cin, str1);
    cout << "Enter string2: ";
    getline(cin, str2);

    bool result1 = solution1(str1, str2);
    bool result2 = anotherSolution(str1, str2);

    cout << "Result (Solution 1): " << result1 << endl;
    cout << "Result (Another solution): " << result2 << endl;

    return 0;
}
