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
	
	
};
int main()
{
	int a[10];
	float b[10];
	int n;
	cout<<"\nenter total number of elements in array : ";
	cin>>n;
	cout<<"\nenter integer elements in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nenter float elements in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	cout<<"\nunsorted integer array : ";
	display(a,n);
	cout<<"\nsorted integer array : \n";
	set(a,n);
	display(a,n);
	
	cout<<"\nunsorted float array : ";
	display(b,n);
	cout<<"\nsorted float array : ";
	set(b,n);
	display(b,n);
	
	return 0;
	
}
