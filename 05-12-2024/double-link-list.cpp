#include <iostream>
using namespace std;

struct Node
{
    Node * previous_node = NULL;
    int data;
    Node * next_node = NULL;
};

class LinkList {
    Node * first_node = NULL;
    Node * last_node = NULL;

    public:
        void add_node(){
            Node * new_node = new Node();
            
            cout<<"Please Input Data: ";
            cin>>new_node->data;

            if (first_node == NULL)
            {
                // list is empty
                first_node = new_node;
                last_node = new_node;   
            } else {
                // list have nodes
                
                last_node->next_node = new_node;
                new_node->previous_node = last_node;

                last_node = new_node;
            }
        }

        void display(){
            Node * temp_node = first_node;

            while (temp_node != NULL)
            {
                cout << temp_node->data<<endl;
                
                temp_node = temp_node->next_node;
            }
        }
        

        void display_reverse(){
            Node * temp_node = last_node;

            while (temp_node != NULL)
            {
                cout << temp_node->data<<endl;
                
                temp_node = temp_node->previous_node;
            }
        }

        void delete_node(){
            int data;
            cout<<"Enter Data of the Node you want to delete? ";
            cin >> data;

            Node * temp_node = first_node;

            while (temp_node != NULL)
            {
                if (temp_node->data == data)
                {
                    

                    // in case only node
                    if (temp_node->previous_node == NULL && temp_node->next_node == NULL)
                    {
                        first_node = NULL;
                        last_node = NULL;
                    }
                    
                    // in case first node
                    else if (temp_node->previous_node == NULL)
                    {
                        temp_node->next_node->previous_node = temp_node->previous_node;
                        first_node = first_node->next_node;
                    }


                    // in case between node
                    else if (temp_node->previous_node != NULL && temp_node->next_node != NULL)
                    {
                        // store privous_node of temp_node into next_node -> previous_pointer
                        temp_node->next_node->previous_node = temp_node->previous_node;

                        // store next_node of temp_node into previous_node -> next_pointer
                        temp_node->previous_node->next_node = temp_node->next_node;
                    }

                    // in case last node
                    else if (temp_node->next_node == NULL)
                    {
                        temp_node->previous_node->next_node = temp_node->next_node;
                        last_node = last_node->previous_node;
                    }

                    delete temp_node;
                    break;
                }
                

                temp_node = temp_node->next_node;
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
        cout<<"Press r for list all data reverse."<<endl;
        cout<<"Press d for delete node."<<endl;
        cout<<"Press n for exit the program."<<endl;
        
        cin >> choice;

        cout<<endl<<endl;
        switch (choice)
        {
            case 'a':
                l1.add_node();
                break;
            
            case 'l':
                l1.display();
                break;
                
            case 'r':
                l1.display_reverse();
                break;
            
            case 'd':
                l1.delete_node();
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
}


















