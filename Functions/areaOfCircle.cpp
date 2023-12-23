#include<iostream>
using namespace std;
float areaOfCircle(float radius){
    float area = 3.1415 * radius *radius;
    return area;
}
int main()
{
    float radius;
    cin>>radius;
    double area = areaOfCircle(radius);
    cout<<"Area Of Circle Is "<<area;
    return 0;
}