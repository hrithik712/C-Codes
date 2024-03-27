#include<iostream>
using namespace std;
int search (int a[], int n, int key)
{
	for(int i=0;i<n;i++)
		if(key==a[i])
			return i;
	return 0;	
}
int main()
{
	int a[]={1,4,5,7,10,9,13};
	int k;
	cout<<"Enter an element to be searched - ";
	cin>>k;
	int index=search(a,7,k);
	cout<<"Element found at index "<<index<<endl;
	return 0;
}