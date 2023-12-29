
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,-3,4,-5,6};
    int low =0;
    int high = arr.size()-1;
    while(low<=high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else if(arr[high]>0)
        {
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
