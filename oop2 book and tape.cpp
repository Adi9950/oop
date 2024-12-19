#include<iostream>
#include<string.h>
using namespace std;
class pub
{
	protected : 
    	int price;
	    char title[30];
	void read()
	{
		cout<<"\n\nenter title : ";
		cin>>title;
		cout<<"\nenter price : ";
		cin>>price;
	}
	void display()
	{
		cout<<"\ntitle : "<<title;
		cout<<"\nprice : "<<price;
	}
};
class book : public pub
{
	public : 
	int pgcount;
	void readb()
	{
		read();
		cout<<"\nenter pgcount : ";
		cin>>pgcount;
		try
		{
			if(pgcount<=0)
			{
				throw 1;
			}
		}catch(int i)
		{
			strcpy(title,"0");
			price=0;
			pgcount=0;
		}
	}
	void displayb()
	{
		pub ::display();
		cout<<"\npgcount : "<<pgcount;	
	}
};
class tape : public pub
{
	public :
		float ptime;
		void readt()
		{
			read();
			cout<<"\nenter play time : ";
			cin>>ptime;
			try
			{
				if(ptime<=0)
				{
					throw 1;
				}
			}catch(int i)
			{
				strcpy(title,"0");
				price=0;
				ptime=0;
			}
		}
		void displayt()
		{
			display();
			cout<<"\nplaytime : "<<ptime;
		}
};

int main()
{
	
	book b;
	tape t;
    cout<"\nenter details of book : ";
	b.readb();
	cout<<"\nbook details : ";
	b.displayb();
	cout<<"\nenter details of tape : ";
	t.readt();
	cout<<"\ndetails of tape : ";
	t.displayt();
	return 0;
}
