#include<iostream>
using namespace std;
int main()
{
    int rowCount;
    cin>>rowCount;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < rowCount - i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}