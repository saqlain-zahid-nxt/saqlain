#include <iostream>
using namespace std;

// Node ka structure define kiya gaya hai
// Har node ke paas ek integer id hai aur next pointer jo agle node ki taraf point karega
struct Node
{
    int id;            // Node ka unique ID
    Node * next = NULL; // Pointer to the next node, initially NULL
};

// Linked List ka class define kiya gaya hai
class LinkList
{
    Node * first_node = NULL; // Pehla node ka pointer, initially NULL
    Node * last_node = NULL;  // Aakhri node ka pointer, initially NULL

    public:
        // Nayi node add karne ka function
        void add_node() {
            Node * new_node = new Node(); // Nayi node ke liye memory allocate ki gayi

            // User se id input lene ke liye
            cout << "Please Enter Id :";
            cin>>new_node->id; // Nayi node ke liye id set ki gayi
            
            // Agar list mein koi node nahi hai
            if (last_node == NULL){
                first_node = new_node; // Pehla node ban gaya yehi node
                last_node = new_node;  // Last node bhi yehi hai abhi
            } else {
                // Pehle se maujood list ke end mein nayi node ko add karte hain
                last_node->next = new_node; // Pichli node ka next is node ki taraf point karega
                last_node = last_node->next; // Last node update kar di gayi
            }
        }

        // Saari nodes ko display karne ka function
        void display_all () {

            Node * cur_node = first_node; // Pehle node se shuru karte hain

            // Jab tak list khatam na ho, saari nodes ka data print karte hain
            while (cur_node != NULL)
            {
                cout<<"ID : "<< cur_node->id<<endl; // Har node ka id print hota hai
                cur_node = cur_node->next; // Agle node pe move karte hain
            }
        }
};

int main (){
    LinkList l1; // Linked List ka object create kiya gaya

    // User se poocha gaya kitne nodes add karne hain
    cout << "How many nodes you want to add?";
    int number; // Node ki total count ke liye variable
    cin >> number; // User se input lete hain

    // Itni baar loop chalega jitni nodes add karni hain
    for (int i = 0; i < number; i++)
    {
        l1.add_node(); // Har iteration mein ek nayi node add karte hain
    }
    
    // Saari nodes ko display karte hain
    l1.display_all();
    return 0; // Program successfully terminate hota hai
}
