// #include<iostream>
// using namespace std;
// void findEvenOdd(int no )
// {
//     if (no%2==0)
//     {
//         cout<<"NO is EVEN ";
//     }
//     else{
//         cout<<"NO IS ODD ";
//     }
// }
// int main()
// {
//     int no;
//     cin>>no;
//     findEvenOdd(no);
//     return 0;
// }

//  bitwise method ;

#include<iostream>
using namespace std;
bool checkEvenOdd(int n)
{
    if (n&1==1)
    {
        return false;
    }
    return true;    
}
int main()
{
    int n;
    cin>>n;
    bool isEven = checkEvenOdd(n);
    if (isEven)
    {
        cout<< n << " Is Even No ";
    }
    else{
        cout<< n << " Is Odd No ";
    }
    return 0;
}