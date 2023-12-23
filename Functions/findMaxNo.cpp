#include<iostream>
using namespace std;
void findMaxNo(int no1 , int no2)
{
    if (no1>no2)
    {
        cout<<"Grater no is "<<no1;
    }
    else
    {
        cout<<"Grater no is "<<no2;
    }
    
}
int main()
{
    int no1;
    cout<<"Enter 1st number "<<endl;
    cin>>no1;
    int no2;
    cout<<"Enter 2nd number "<<endl;
    cin>>no2;

    findMaxNo(no1,no2);

    return 0;
}