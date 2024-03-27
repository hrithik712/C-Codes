#include<iostream>
using namespace std;
int main()
{
    float base, height, area, perimeter;
    cout<<"Enter base and height of Triangle to find it's area - "<<endl;
    cin>>base>>height;

    area = (base*height)/2;

    perimeter = (2*(base*height))/2;

    cout<<"Area of given Triangle is - "<<area<<endl;
    cout<<"Perimeter of given Triangle is - "<<perimeter;
    return 0;
}