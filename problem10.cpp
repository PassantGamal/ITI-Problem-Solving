#include <iostream>
#include <vector>
using namespace std;
///E - Snacktower
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int current = n;
    bool temp[n + 1] = {false};

    for(int i = 0; i < n; i++) {
        int x = v[i];
        temp[x] = true;

        while(current > 0 && temp[current]) {
            cout << current << " ";
            current--;
        }
        cout << "\n";
    }

    return 0;
}
