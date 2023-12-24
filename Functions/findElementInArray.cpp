#include<iostream>
using namespace std;
bool find(int arr[],int size , int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,6,9,6,2,32,4,5,67,97,23,45,5,6};
    int size = sizeof(arr)/4;
    int key;
    cin>>key;
    if (find(arr,size,key))
    {
        cout<<"ELEMENT IS PRESENT ";
    }
    else{
        cout<<"ELEMENT IS NOT PRESENT ";
    }
    
    return 0;
}