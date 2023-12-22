// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int  i = 0; i < 3; i++)
//     {
//         if (i==0 || i==2)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 cout<<"* ";
//             }
//         }
//         else{
//             cout<<"* ";
//             for (int j = 0; j < 3; j++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{
    int rowCount,colCount;
    cin >> rowCount;
    cin >> colCount;
    for (int i = 0; i < rowCount; i++)
    {
        if (i==0 || i== rowCount-1 )
        {
            for (int j = 0; j < colCount; j++)
            {
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for (int j = 0; j < colCount-2; j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}