#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int fact =1;
    for (int i = N; i >=1; i--)
    {
        fact = fact*i;
    }
    cout<<fact;
    cout<<endl;
    int a= 5;
    cout<<(++a)*(++a);
    return 0;
}