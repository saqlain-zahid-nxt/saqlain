#include <iostream>
using namespace std;

struct Harami
{
    int id;
    Harami *next = NULL;
};

class HaramionKiQatar
{
    Harami *pehla_harami = NULL;
    Harami *akhri_harami = NULL;

    public:
        void add_harami() {
            Harami *naya_harami = new Harami();

            cout << "Please Enter Id : ";
            cin >> naya_harami->id;
            
            if (akhri_harami == NULL) {
                pehla_harami = naya_harami;
                akhri_harami = naya_harami;
            } else {
                akhri_harami->next = naya_harami;
                akhri_harami = akhri_harami->next;
            }
        }

        void display_all_haramis() {
            Harami *current_harami = pehla_harami;

            while (current_harami != NULL) {
                cout << "ID : " << current_harami->id << endl;
                current_harami = current_harami->next;
            }
        }
};

int main() {
    HaramionKiQatar qatar;

    cout << "How many haramis you want to add? ";
    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        qatar.add_harami();
    }

    qatar.display_all_haramis();
    return 0;
}
