#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    long long results[1005];
    long long arr1[105], arr2[105];

    for(int t = 0; t < x; t++) {

        int n, m;
        cin >> n >> m;

        for(int i = 0; i < n; i++) cin >> arr1[i];
        for(int i = 0; i < m; i++) cin >> arr2[i];

        for(int j = 0; j < m; j++) {

            int minPos = 0;
            for(int i = 1; i < n; i++)
                if(arr1[i] < arr1[minPos])
                    minPos = i;

            arr1[minPos] = arr2[j];
        }

        long long sum = 0;
        for(int i = 0; i < n; i++)
            sum += arr1[i];

        results[t] = sum;
    }

    for(int i = 0; i < x; i++)
        cout << results[i] << "\n";

    return 0;
}
