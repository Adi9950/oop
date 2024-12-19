#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<string,int>mymap;
	map<string,int> :: iterator itr;
	int n,p;
	string s;
	cout<<"\nenter how many data you want to enter :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nenter states and its population : ";
		cin>>s>>p;
		mymap.insert(pair<string,int>(s,p));
	}
	cout<<"\nstates and its population : ";
	for(itr=mymap.begin();itr!=mymap.end();itr++)
	{
		cout<<(*itr).first<<"\t"<<(*itr).second;
	}
	cout<<"\nenter state you want to search : ";
	cin>>s;
	itr=mymap.find(s);
	if(itr==mymap.end())
	{
		cout<<s<<"\nnot found.";
	}
	else
	{
		cout<<s<<"\nis found.";
	}
	return 0;
}
