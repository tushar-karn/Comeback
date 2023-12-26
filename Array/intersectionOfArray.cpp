#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int getIntrsection(vector<int>arr , vector<int>brr)
{
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i]==brr[j])
            {
                brr[j]=INT_MIN;
                ans.push_back(arr[i]);
            }
        }
    }
    cout<<"INTERSECTION OF ARRAY IS ";
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
    
}
int main()
{
    int m;
    cin>>m;
    vector<int>arr(m);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int n;
    cin>>n;
    vector<int>brr(n);
    for (int i = 0; i < brr.size(); i++)
    {
        cin>>brr[i];
    }

    getIntrsection(arr,brr);
    
    
    return 0;
}