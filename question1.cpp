#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
     {
        name = n;
        rollNumber = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {

    
    cout << "Student Objects with Array\n";
    Student students[2]
    {
        Student("Alice", 1),
        Student("Bob", 2)
    };

    for (int i = 0; i < 2; i++) 
    {
        students[i].display();
    }
}