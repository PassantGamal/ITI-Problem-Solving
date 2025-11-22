#include <iostream>
#include <vector>
using namespace std;
///sign-of-the-product-of-an-array
int arraySign(vector<int>& nums) {
    int count = 0;

    for(int i = 0; i < (int)nums.size(); i++) {
        if(nums[i] == 0)
            return 0;
        if(nums[i] < 0)
            count++;
    }

    if(count % 2 == 0)
        return 1;
    else
        return -1;
}

int main() {

    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(-2);
    nums.push_back(-3);
    nums.push_back(-4);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);

    int result = arraySign(nums);

    cout << "The sign of product = " << result << endl;

    return 0;
}
