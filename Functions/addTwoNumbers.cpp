#include<iostream>
using namespace std;
int addNo(int n, int m);
int main()
{
    int n,m;
    cin>>n>>m;
    int sum = addNo(n,m);
    cout<<"Addition of No is "<<sum;
    return 0;
}
int addNo(int n, int m)
{
    int add = n+m;
    return add;
}