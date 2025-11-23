#include <iostream>
#include <string>
using namespace std;
///A. BowWow and the Timetable

bool lessThan(string a, string b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main() {
    string s;
    cin >> s;

    string vehicle = "1";
    int count = 0;

    while (lessThan(vehicle, s)) {
        count++;
        vehicle += "00";
    }

    cout << count << endl;
    return 0;
}
