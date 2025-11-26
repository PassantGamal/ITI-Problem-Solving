#include <iostream>
using namespace std;

int main()
{
    int OrangeNum, MaxOrangeSize, MaxWasteSize;
    cin >> OrangeNum >> MaxOrangeSize >> MaxWasteSize;

    int OrangeSize[OrangeNum];
    for(int i = 0; i < OrangeNum; i++)
    {
        cin >> OrangeSize[i];
    }

    int count = 0, sizer = 0;
    for(int i = 0; i < OrangeNum; i++)
    {
        if(OrangeSize[i] <= MaxOrangeSize)
        {
            sizer += OrangeSize[i];
            if(sizer > MaxWasteSize)
            {
                count++;
                sizer = 0;
            }
        }
    }

    cout << count;
    return 0;
}
