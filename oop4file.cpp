#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout("a.txt");
	if(!fout)
	{
		cerr<<"\nerror in opening file :";
		return 1;
	}
	fout<<"\nhello this is oop practicle heppening here ! ";
	cout<<"\nwritten into file.";
	fout.close();
	
	ifstream fin("a.txt");
	{
		if(!fin)
		{
			cerr<<"\nerror in opening file.";
			return 1;
		}
		string line;
		cout<<"\nreading from file....\n";
		while(getline(fin,line))
		{
			cout<<line;
		}
		fin.close();
	};
	return 0;
}
