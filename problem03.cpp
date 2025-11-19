#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string result;
 bool found;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        found = false;

        for (int j = 0; j < result.length(); j++)
        {
            if (str[i] == result[j])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            continue;
        }

        result += str[i];
    }

    cout << found;
    return 0;
}
