#include<iostream>
#include<limits.h>
using namespace std;
int findMaxNo(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[]={11,23,1,34,5,3,5,7,86,785,24,56,3,6,38,4,932,56,643,86,75,85,26,92,123};
    int size = sizeof(arr)/4;
    int maximumNumber = findMaxNo(arr,size);
    cout<<"Maximum Number Is "<<maximumNumber;
    return 0;
}