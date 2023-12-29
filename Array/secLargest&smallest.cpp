// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int rows = 5;
//     int cols = 5;
//     vector<vector<int> > arr(rows, vector<int>(cols, -8));

//     for(int i = 0; i < rows; i++){
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl; // Add this line for a line break after each row
//     }

//     return 0;
// }

// #include <bits/stdc++.h> 
// void sort012(int *arr, int n)
// {
//     int zeros,once,twos;
//     zeros=once=twos =0;

//     for(int i = 0 ; i< n ;i++){
//         if(arr[i]==0)
//         {
//             zeros++;
//         }
//         else if(arr[i]==1)
//         {
//             once++;
//         }
//         else{
//             twos++;
//         }
//     }
//     // vector<int>ans;
//     int i = 0;
//     while(zeros--){
//         arr[i]=0;
//         i++;
//     }
//     while(once--){
//         arr[i]=1;
//         i++;
//     }
//     while(twos--){
//         arr[i]=2;
//         i++;
//     }
//     for(int i = 0 ; i< n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,-3,4,-5,6};
    int i = 0;
    int start = 0;
    int end = arr.size()-1;
    while (start<=end)
    {
        if (arr[start]<0)
        {
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}