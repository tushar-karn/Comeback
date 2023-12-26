#include <iostream>
using namespace std;
int main()
{
    int rows = 3;
    int cols = 3;
    int arr[3][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    

    for (int i = 0; i < rows; i++)
    {
        int colSum = 0;
        for (int j = 0; j < cols; j++)
        {
            colSum = colSum + arr[j][i];
        }
        cout<<colSum<<endl;
    }

    return 0;
}