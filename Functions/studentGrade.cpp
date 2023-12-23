#include<iostream>
using namespace std;
char findGrade(int marks){
    switch(marks/10)
    {
        case 10: return 'A'; break;
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'c'; break;
        case 6: return 'D'; break;
        default : return 'E'; break;
    }
}
int main()
{
    int marks;
    cin>>marks;
    char FinalGrade = findGrade(marks);
    cout<<"Grade of Student is "<<FinalGrade;
    return 0;
}