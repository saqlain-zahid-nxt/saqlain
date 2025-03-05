#include <iostream>
using namespace std;

class House
{
public:
    int cash;
    string city;
    House *next = NULL;
};

class Linklist
{
private:
    House *first_house = NULL;
    House *last_house = NULL;

public:
    void collect()
    {
        House *new_house = new House();
        
        cout << "Enter the city Name where you want to Hide 1 Million: ";
        cin >> new_house->city;
        if (last_house == NULL)
        {
            first_house = new_house;
            last_house = new_house;
        }
        else
        {
            last_house->next = new_house;
            last_house = last_house->next;
        }
    
    }

    void display()
    {
        House *current_house = first_house;
        while (current_house != NULL)
        {
            cout<<endl;
            cout << "We have collected 1 Million from '" << current_house->city << "'" << endl;

            if (current_house->next != NULL)
            {
                cout << "Now go to the next city '" << current_house->next->city << "'" << endl;
            }
            else
            {
                cout << "No more cities left. We have collect All Cash." << endl;
            }
            cout << endl;
            current_house = current_house->next;
        }
    }
};

int main()
{
    Linklist l;
    int num;
    cout << "How many millions do you have: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << ". ";
        l.collect();
    }
    l.display();
    return 0;
}