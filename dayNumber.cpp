#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter Day Number : "<<endl;
    cin>>day;

    if(day==1){
        cout<<"MONDAY"<<endl;

    }
    else if (day == 2){
        cout<<"TUESDAY"<<endl;
    }

    else if (day==3){
        cout<<"WEDNESDAY"<<endl;
    }
    else if(day==4){
        cout<<"THURSDAY"<<endl;
    }
    else if(day==5){
        cout<<"Friday"<<endl;
    }
    else if(day==6){
        cout<<"Saturday"<<endl;
    }
    else if (day== 7){
        cout<<"SUNDAY "<<endl;
    }
    return 0;
}