#include<iostream>
using namespace std;
bool isPrime(int N){
    if (N==0 || N ==1)
    {
        return false;
    }
    for (int i = 2; i < N; i++)
    {
        if (N%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cout<<"Enter the value of N ";
    cin>>N;
    for (int i = 1; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";   
        }      
    }
    
    return 0;
}