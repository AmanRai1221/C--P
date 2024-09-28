#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

void printStudent(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.gpa << endl;
}

Student createStudent(string name, int age, float gpa) {
    Student s;
    s.name = name;
    s.age = age;
    s.gpa = gpa;
    return s;
}

int main() {
    Student s1 = createStudent("Aman Rai", 20, 3.5);
    printStudent(s1);

    return 0;
}