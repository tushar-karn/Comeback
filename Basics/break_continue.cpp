#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 6; i++)
    {
        cout<<"Tushar ";
        break;
    }
    cout<<"Karn ";
    cout<<endl;

    for (int i = 0; i < 6; i++)
    {
        continue;
        cout<<i<<" ";
    }
    
    return 0;
}