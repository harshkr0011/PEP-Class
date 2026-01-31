//Student class in heap

#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    string section;
    
    Student(string n, int r, string s) {
        name = n;
        roll = r;
        section = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Section: " << section << endl;
    }
};

int main() {

    // By heap
    Student *s1 = new Student("Harsh", 101, "K23");

    s1->display();
    delete s1; //to save memory


    // By normal static way
    // Student s1("Harsh", 101, "K23");

    // s1.display();
    // return 0;
}

