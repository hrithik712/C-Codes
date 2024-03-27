#include<iostream>
using namespace std;
int main()
{
    int radius, area;

    cout<< "Enter radius to find the area of circle - "<<endl;
    cin>>radius;

    area = 3.14*radius*radius;

    cout<<"The area of Circle is - "<<area<<endl;

    return 0;
}