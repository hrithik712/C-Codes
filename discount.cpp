#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter your total amount after shopping - ";
    cin>>amount;

    if(amount<=100)
    {
        cout<<"Sorry!, Shop more to geo dicount"<<endl;
    }
    else if(amount>=100 && amount<=500)
    {
        cout<<"Hurray!, Your got 5% remit on total shop "<<endl;

    }
    else if(amount>=501) 
    {
        cout<<"You got 10% remit on total shop "<<endl;
    }
    else{
        cout<<"Your are not lucky one!"<<endl<<"Thank You for your time "<<endl;
    }
    cout<<"Thank You for Your Visit"<<endl;
    return 0;
}