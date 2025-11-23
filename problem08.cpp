#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;

    vector<char> letters;
    for(char ch='a'; ch<='z'; ch++)
    {
        letters.push_back(ch);
    }

    bool foundAll = true;

    for(int j = 0; j < letters.size(); j++)
    {
        bool found = false;
        for(int i = 0; i < str.length(); i++)
        {
            if(tolower(str[i]) == letters[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            foundAll = false;
            break;
        }
    }

    if(foundAll)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
