#include<iostream>
#include <vector>
using namespace std;
// void findMissingEle(vector<int> arr ){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int index = abs(arr[i]);
//         if(arr[index-1]>0)
//         {
//             arr[index-1]*=-1;
//         }
//     }
    
//     for(auto x : arr){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i]>0)
//         {
//             cout<<i+1;
//         }
        
//     }
// }

void findMissingEle(vector<int>arr)
{
    int i = 0 ; 
    while (i<arr.size())
    {
        int index = arr[i]-1;
        if (arr[i]!=arr[index])
        {
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]!=i+1)
        {
            cout<<i+1;
        }
    }
    
}
int main()
{
    // visiting method
    vector<int>arr{1,3,5,3,4};
    findMissingEle(arr);

    return 0;
}