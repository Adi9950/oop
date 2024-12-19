#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;

int main()
{
    int n, p;
    string state;
    map<string, int> mymap;
    cout << "Enter number of states you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of the state: ";
        cin >> state;
        cout << "Enter the population of the state: ";
        cin >> p;

        mymap.insert(make_pair(state, p));
    }

    map<string, int>::iterator itr;
    cout << "\nState\tPopulation" << endl;
    for (itr = mymap.begin(); itr != mymap.end(); itr++)
    {
        cout << (*itr).first << "\t" << (*itr).second << endl;
    }

    cout << "Enter state to be searched: ";
    cin >> state;
    itr = mymap.find(state);
    if (itr == mymap.end())
    {
        cout << "State not found";
    }
    else
    {
        cout << "Population of " << state << " is: " << (*itr).second;
    }
    
    return 0;
}
