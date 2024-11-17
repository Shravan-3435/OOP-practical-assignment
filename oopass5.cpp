//function templates
// selection sort

#include<iostream>
using namespace std;

#define size 10
int n;
template<class T>

void selection(T A[size])
{
	int i,j,min;
	T temp;
	for (i=0; i<=n-2; i++)
	{
		min=i;
		for(j=i+1;  j<=n-1 ; j++)
		{
			if (A[j]<A[min])
			min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	cout<<"\nsorted list=\n";
	for(i=0; i<n; i++)
	cout<<"\t"<<A[i];
}int main()
{
	int i;
	int A[size];
	float B[size];
	
	cout <<"selection sort\n";
	cout<<"\ninteger element\n";
	cout<<"\n enter how many element you want \n";
	cin>>n;
	cout<<"enter the integer element\n";
	for(i=0; i<n; i++)
	cin>>A[i];
	selection(A);
	cout<<"\nfloat element\n";
	cout<<"enter how many element you want\n";
	cin >>n;
	cout<<"\nenter float element\n";
	for(i=0; i<n; i++)
	cin>>B[i];
	selection(B);
	return 0;
}
