#include<iostream>
using namespace std;
class complex
{
	public :
		int real;
		int img;
		complex()
		{
			real=img=0;
		}
		complex operator +(complex c2)
		{
			complex c3;
			c3.real=real + c2.real;
			c3.img=img+ c2.img;
			return c3;
		}
		complex operator *(complex c2)
		{
			complex c4;
			c4.real=(real*c2.real)-(img*c2.img);
			c4.img=(real*c2.img)+(img*c2.real);
			return c4;
		}
		friend istream& operator>>(istream& is,complex &c);
		friend ostream& operator<<(ostream& os,complex &c);
};
		istream& operator>>(istream& is, complex &c)
		{
			is>>c.real>>c.img;
			return is;
		}
		ostream& operator<<(ostream& os, complex&c)
		{
			os<<c.real<<"+"<<c.img<<"i";
			return os;
		}		

int main()
{
	complex c1,c2,c3,c4;
	int ch;
	
	do
	{
		cout<<"1)insert binary numbers\n2)complex addition\n3)complex multiplication\n4)exit";
		cout<<"\nenter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: 
			     cout<<"\nenter first complex number : ";
			     cin>>c1;
			     
			     cout<<"\nenter second complex number : ";
			     cin>>c2;
			     break;
			
			case 2 :
				c3=c1 + c2;
				cout<<"Addition of binary number : "<<c3;
				break;
				
			case 3 :
				c4=c1*c2;
				cout<<"complex multiplication : "<<c4;
				break;
				
			case 4:
				cout<<"exited....\n";
				break;
				
			default:
				cout<<"invalid choice\n";			
				     
		}
		
	}while(ch!=4);
	return 0;
	
}









