#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node * next_node;
};

class LinkList
{
    private:
        Node * head_node;
        Node * last_node;
        int length = 0;
    public:
        LinkList(){}

        void add_node(){
            int data;
            cout<<"Please Enter Data: ";
            cin>>data;

            Node * temp_node = new Node();

            temp_node->data = data;
            temp_node->next_node = NULL;

            if(length == 0 ){
                head_node = temp_node;
                last_node = head_node;
            } else {
                last_node->next_node = temp_node;
                last_node = temp_node;
            }

            length++;
        }

        void list_node(){
            Node * temp = head_node;
            // cout<<head_node<<" : "<<head_node->data<<" : " << head_node->next_node << endl;

            while (true)
            {
                cout<<"Data: "<<temp->data<<endl;

                temp = temp->next_node;

                if (temp->next_node == NULL)
                {
                    cout<<"Data: "<<temp->data<<endl;
                    break;
                }
                
            }
            
        }
};


main()
{
    LinkList l;

    int number;

    cout<<"How many nodes you want to add? ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        l.add_node();
    }


    l.list_node();
    
}
