#include <iostream>
using namespace std;

struct Node
{
    int id;
    Node * next = NULL;
};

class LinkList
{
    Node * first_node = NULL;
    Node * last_node = NULL;
    public:
        void add_node() {
            Node * new_node = new Node();

            cout << "Please Enter Id :";
            cin>>new_node->id;
            
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
                cout<<"ID : "<< cur_node->id<<endl;
                cur_node = cur_node->next;
            }
        }
};

int main (){
    LinkList l1;

    cout << "How many nodes you want to add?";
    int number;
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        l1.add_node();
    }
    

    l1.display_all();
    return 0;
}