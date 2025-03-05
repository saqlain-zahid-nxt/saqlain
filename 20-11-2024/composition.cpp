#include <iostream>
#include <string>
using namespace std;

// Engine Class
class Engine {
    private:
        string engine_no;

    public:
        // Setter for Engine Number
        void set_engine_no(string eng_no) {
            engine_no = eng_no;
        }

        // Getter for Engine Number
        string get_engine_no() const {
            return engine_no;
        }
};

// Car Class
class Car {
    private:
        Engine engine; // Composition: Car has an Engine
        string model;

    public:
        // Setter for Engine (Delegation)
        void set_engine(string eng) {
            engine.set_engine_no(eng);
        }

        // Getter for Engine (Delegation)
        string get_engine() {
            return engine.get_engine_no();
        }

        // Setter for Model
        void set_model(string car_model) {
            model = car_model;
        }

        // Getter for Model
        string get_model() {
            return model;
        }

        // Display Car Details
        void display() {
            cout << "Engine No: " << engine.get_engine_no() << endl;
            cout << "Model: " << model << endl;
        }
};

// Main Function
int main() {

    // Create Car Object
    Car maruti;
    maruti.set_engine("1245"); // Set Engine in Car
    maruti.set_model("2019");

    // Display Car Details
    maruti.display();

    return 0;
}
