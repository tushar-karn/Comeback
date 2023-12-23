#include<iostream>
using namespace std;
void findEvenOdd(int no )
{
    if (no%2==0)
    {
        cout<<"NO is EVEN ";
    }
    else{
        cout<<"NO IS ODD ";
    }
}
int main()
{
    int no;
    cin>>no;
    findEvenOdd(no);
    return 0;
}