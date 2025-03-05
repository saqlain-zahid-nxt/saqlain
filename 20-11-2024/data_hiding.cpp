#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int id;
        int cnic;
        string name;
        string class_name;

    public:
        // Setter for ID
        void set_id(int _id) {
            id = _id;
        }

        // Getter for ID
        int get_id() {
            return id;
        }

        // Setter for CNIC
        void set_cnic(int _cnic) {
            cnic = _cnic;
        }

        // Getter for CNIC
        int get_cnic() {
            return cnic;
        }

        // Setter for Name
        void set_name(string _name) {
            name = _name;
        }

        // Getter for Name
        string get_name() {
            return name;
        }

        // Setter for Class Name
        void set_class_name(string _class_name) {
            class_name = _class_name;
        }

        // Getter for Class Name
        string get_class_name() {
            return class_name;
        }
};

int main() {
    Student student;

    // Setting values using setters
    student.set_id(1);
    student.set_cnic(123456789);
    student.set_name("Ali Khan");
    student.set_class_name("10th Grade");

    // Getting and displaying values using getters
    cout << "ID: " << student.get_id() << endl;
    cout << "CNIC: " << student.get_cnic() << endl;
    cout << "Name: " << student.get_name() << endl;
    cout << "Class Name: " << student.get_class_name() << endl;

    return 0;
}
