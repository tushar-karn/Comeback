#include<iostream>
using namespace std;
void findFactorial(int N){
    int fact =1;
    for (int i = N; i > 0; i--)
    {
        fact = fact * i;
    }
    cout<<fact;
}
int main()
{
    int N;
    cin>>N;
    findFactorial(N);
    return 0;
}