#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool MayLucky = false;

    for (int i = 1; i <= n; i++) {
        int x = i;
        bool lucky = true;

        while (x > 0) {
            int digit = x % 10;
            if (digit != 4 && digit != 7) {
                lucky = false;
                break;
            }
            x /= 10;
        }

        if (lucky && n % i == 0) {
            MayLucky = true;
            break;
        }
    }

    if (MayLucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
