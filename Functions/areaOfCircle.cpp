#include<iostream>
using namespace std;
void areaOfCircle(int radius){
    float area = 3.14 * radius *radius;
    cout<<area;
}
int main()
{
    int radius;
    cin>>radius;
    areaOfCircle(radius);
    return 0;
}