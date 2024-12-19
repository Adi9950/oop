#include <iostream>
#include <string>
using namespace std;

class student {
public:
    static int count;
    string name, div, dob, Class, bg, add;
    int roll;
    long int mob;

    student() {
        name = "Adi\n";
        div = "A\n";
        Class = "se\n";
        roll = 54;
        dob = "4/11/2005\n";
        add = "shrirampur\n";
        mob = 88464841;
        bg = "o+ve\n";
        count++;
    }

    student(const student &s) {
        name = s.name;
        div = s.div;
        roll = s.roll;
        Class = s.Class;
        dob = s.dob;
        mob = s.mob;
        bg = s.bg;
        add = s.add;
        count++;
    }

    void read() {
        cout << "\nEnter name of student: ";
        cin >> name;
        cout << "\nDiv Roll Class DOB Mob Add: ";
        cin >> div >> roll >> Class >> dob >> mob >> add;
    }

    void display() const {
        cout << "\nName: " << name;
        cout << "\nDiv: " << div;
        cout << "\nClass: " << Class;
        cout << "\nRoll: " << roll;
        cout << "\nDOB: " << dob;
        cout << "\nMob: " << mob;
        cout << "\nAdd: " << add;
    }

    static void displayCount() {
        cout << "\nNo. of students: " << count;
    }

    ~student() {
        cout << "\n" << this->name << " is deleted..";
    }
};

int student::count = 0;

int main() {
    student s1, s2;
    int n;

    cout << "\nEnter total number of students data: ";
    cin >> n;
    student *ptr = new student[n];

    for (int i = 0; i < n; i++) {
        ptr[i].read();
        cout << "\nStudent data: ";
        ptr[i].display();
    }

    student::displayCount();

    delete[] ptr;
    return 0;
}
