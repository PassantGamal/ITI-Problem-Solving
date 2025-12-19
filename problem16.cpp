#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int t;
    cin>> t;
    vector <char> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    for(int i=0;i<t;i++)
    {
       for(int j=0; j<n-1;j++)
       {
           if(arr[j]=='B' && arr[j+1]=='G')
           {
               char temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               j += 1;
           }

       }
    }
    for(int i=0;i<n;i++)
    {
        cout<< arr[i];
    }
    return 0;
}
