#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int id;
        string name;
        string class_name;
        
    public:


        void set_student_data() {
            cout<<"Please Enter ID: ";
            cin>>id;

            cin.ignore();
            cout<<"Please Enter Name: ";
            getline(cin, name);
            
            cout<<"Please Enter Class Name: ";
            getline(cin, class_name);
        }

        int get_id(){
            return id;
        }

        void display_student_data(){
            cout<<" ID: "<<id<<endl;
            cout<<" Name: "<<name<<endl;
            cout<<" Class Name: "<<class_name<<endl;

            cout<<"------------------------"<<endl<<endl;
        }
};


// with Inhertance

class Node : public Student {
    public:
        Node * next;
};


class LinkList
{
    Node * first_node = NULL;
    Node * last_node = NULL;

    public:
        void add_node() {
            Node * new_node = new Node();
            new_node->set_student_data();

            if (last_node == NULL){
                first_node = new_node;
                last_node = new_node;
            } else {
                last_node->next = new_node;
                last_node = last_node->next;
            }
        }

        void display_all () {

            Node * cur_node = first_node;

            while (cur_node != NULL)
            {
                cur_node->display_student_data();

                cur_node = cur_node->next;
            }
        }

        void search(){
            int id;
            cout<<"Enter Student Id: ";
            cin>>id;

            Node * cur_node = first_node;

            while (cur_node != NULL)
            {
                if(id == cur_node->get_id()){
                    cur_node->display_student_data();
                    break;
                }
                
                cur_node = cur_node->next;
            }

        }

};


main()
{
    char choice;
    LinkList l1;

    do{

        cout<<"Press a for adding data."<<endl;
        cout<<"Press l for list all data."<<endl;
        cout<<"Press s for searching data."<<endl;
        cout<<"Press n for exit the program."<<endl;
        
        cin >> choice;

        cout<<endl<<endl;
        switch (choice)
        {
            case 'a':
                l1.add_node();
                break;
            
            case 'l':
                l1.display_all();
                break;
                
            case 's':
                l1.search();
                break;
            
            case 'n':
                cout<<"Terminating..."<<endl;
                break;

            default:
                cout<<"Wrong Choice, Try again"<<endl;
                break;
        }

        cout<<"----------------------"<<endl<<endl;
    } while (choice != 'n' && choice != 'N');
    

    return 0;
}
