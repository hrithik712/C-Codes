#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
    float marks1, marks2, marks3, marks4, marks5, percentage;
    cout<<"Enter the marks of all 5 Subjects : "<<endl;
    cin>> marks1 >> marks2 >> marks3 >> marks4 >> marks5 ;

    percentage = (marks1+marks2+marks3+marks4+marks5)/5;

    cout<<"Your Percentage is : "<< percentage<<endl;

    if(percentage >60)
    {
        cout<<"First Division";
    }
    else if(50<percentage<60)
    {
        cout<<"Second Division";
    }
    
    else
    {
        cout<<"You Passed Third Division";
    }
    return 0;
}