#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                for(int j = i + 1; j < nums.size(); j++)
                {
                    if(nums[j] != 0)
                    {
                        temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums;
    nums.resize(n);

    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution s;
    s.moveZeroes(nums);

    cout << "Result: ";
    for(int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    cout << endl;
    return 0;
}
