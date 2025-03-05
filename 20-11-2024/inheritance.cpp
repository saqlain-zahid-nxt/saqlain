#include <iostream>
#include <string>
using namespace std;

// Person
class Person {
    private:
        int id = 0;
        string name;
        
    public:
        // Setters
        void set_id(int _id) { id = _id; }
        void set_name(string _name) { name = _name; }
        
        // Getters
        int get_id() { return id; }
        string get_name() { return "I I I " + name; }
};

// Student Class
class Student : public Person {
    private:
        string class_name;

    public:
        // Setters
        void set_class_name(string _class_name) { class_name = _class_name; }

        // Getters
        string get_class_name() { return class_name; }
};

// Teacher Class
class Teacher : public Person {
    private:
        string class_name;
        string grade;

    public:
        // Setters
        void set_class_name(string _class_name) { class_name = _class_name; }
        void set_grade(string _grade) { grade = _grade; }

        // Getters
        string get_class_name() { return class_name; }
        string get_grade() { return grade; }
};

// Principal Class
class Principal : public Person {
    private:
        string school_name;
        string grade;

    public:
        // Setters
        void set_school_name(string _school_name) { school_name = _school_name; }
        void set_grade(string _grade) { grade = _grade; }

        // Getters
        string get_school_name() { return school_name; }
        string get_grade() { return grade; }
};

int main() {
    // Student Example
    Student student;
    student.set_id(1);
    student.set_name("Ali Khan");
    student.set_class_name("10th Grade");

    cout << "Student Details:" << endl;
    cout << "ID: " << student.get_id() << endl;
    cout << "Name: " << student.get_name() << endl;
    cout << "Class Name: " << student.get_class_name() << endl;
    cout << endl;

    // Teacher Example
    Teacher teacher;
    teacher.set_id(101);
    teacher.set_name("Ms. Fatima");
    teacher.set_class_name("10th Grade");
    teacher.set_grade("A");

    cout << "Teacher Details:" << endl;
    cout << "ID: " << teacher.get_id() << endl;
    cout << "Name: " << teacher.get_name() << endl;
    cout << "Class Name: " << teacher.get_class_name() << endl;
    cout << "Grade: " << teacher.get_grade() << endl;
    cout << endl;

    // Principal Example
    Principal principal;
    principal.set_id(1001);
    principal.set_name("Dr. Ahmed");
    principal.set_school_name("City High School");
    principal.set_grade("A+");

    cout << "Principal Details:" << endl;
    cout << "ID: " << principal.get_id() << endl;
    cout << "Name: " << principal.get_name() << endl;
    cout << "School Name: " << principal.get_school_name() << endl;
    cout << "Grade: " << principal.get_grade() << endl;

    return 0;
}
