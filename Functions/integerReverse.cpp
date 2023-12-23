#include<iostream>
using namespace std;
int reverseInteger(int N)
{
    bool isNegative = false;
    if (N<0)
    {
        isNegative = true;
        N=-N;
    }
    
    int ans = 0;
    int rem=0;
    while (N>0)
    {
        rem= N%10;
        ans = (ans * 10) + rem;
        N= N/10;
    }

    return isNegative ? -ans : ans;
}
int main()
{
    int N;
    cin>>N;

    int reversedno = reverseInteger(N);
    cout<<"REversed Integer is "<<reversedno;
 
    return 0;
}