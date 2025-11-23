#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        bool found[10] = {false};
        int val = a[i];


        while(val > 0)
        {
            int digit = val % 10;
            if(digit <= k)
                found[digit] = true;

            val=val/ 10;
        }


        bool isGood = true;
        for(int d = 0; d <= k; d++)
        {
            if(!found[d])
            {
                isGood = false;
                break;
            }
        }

        if(isGood)
            count++;
    }

    cout << count;
    return 0;
}
