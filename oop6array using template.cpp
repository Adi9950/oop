#include<iostream>
using namespace std;
template<class T>
void display(T A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
template<class T>
void set(T A[],int n)
{
	int i,j,min;
	T temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if (A[j]<A[min])
			{
				min=j;
			}
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
int main()
{
	int i,n;
	int a[10];
	float b[10];
	cout<<"\nenter no. of elements :  ";
	cin>>n;
	cout<<"\nenter elemnts in integer array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nenter float aray : ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	cout<<"\nunsorted int array : ";
	display(a,n);
	cout<<"\nsorted array : ";
	set(a,n);
	display()
}
