#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
class student {
    string name, dob;
    string phone;
public:
    int r;
    void read() {
        cout << "\nEnter name of student: ";
        cin >> name;
        cout << "\nEnter the roll number of student: ";
        cin >> r;
        cout << "\nEnter date of birth of student: ";
        cin >> dob;
        cout << "\nEnter phone number: ";
        cin >> phone;
    }
    void display() {
        cout << "Name of student: " << name << endl;
        cout << "Roll number of student: " << r << endl;
        cout << "Date of birth of student: " << dob << endl;
        cout << "Phone number of student: " << phone << endl;
    }
    bool operator==(const student &s) {
        return (r == s.r);
    }
};

void insert(vector<student> &v) {
    student ob;
    ob.read();
    v.push_back(ob);
}

void show(vector<student> &v) {
    vector<student>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++) {
        itr->display();
    }
}

void search(vector<student> &v) {
    student ob;
    cout << "Enter the roll number of the student you want to search: ";
    cin >> ob.r;
    vector<student>::iterator itr;
    itr = find(v.begin(), v.end(), ob);
    if (itr == v.end()) {
        cout << "Record not found" << endl;
    } else {
        cout << "Record found" << endl;
        itr->display();
    }
}

void del(vector<student> &v) {
    student ob;
    cout << "Enter the roll number you want to delete: ";
    cin >> ob.r;
    vector<student>::iterator itr;
    itr = find(v.begin(), v.end(), ob);
    if (itr == v.end()) {
        cout << "Not found" << endl;
    } else {
        v.erase(itr);
        cout << "Information is deleted" << endl;
    }
}

bool check1(const student &S1, const student &S2) {
    return (S1.r < S2.r);
}

void sorting(vector<student> &v) {
    sort(v.begin(), v.end(), check1);
    cout << "List is sorted" << endl;
}

int main() {
    vector<student> v;
    int ch;
    char choice;
    do {
        cout << "1. Create\n2. Display\n3. Insert\n4. Search\n5. Delete\n6. Sorting" << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                int n, i;
                cout << "Enter how many students you want to enter the data for: ";
                cin >> n;
                for (i = 0; i < n; i++) {
                    insert(v);
                }
                break;
            case 2:
                show(v);
                break;
            case 3:
                insert(v);
                break;
            case 4:
                search(v);
                break;
            case 5:
                del(v);
                break;
            case 6:
                sorting(v);
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
