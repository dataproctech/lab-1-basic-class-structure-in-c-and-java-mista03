// include the necessary libraries
#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
        //attributes
        string make;
        string model;
        int year;

        // Constructor
        Car(string x, string y, int z){
            make = x;
            model = y;
            year = z;
        }
        // Method to display car information
        void displayInfo(){
            cout << make << ", " << model << ", " << year << "\n"; 
        }
};

int main() {
    // Create a Car object
    Car car1("mazda", "rx7", 1999);
    // Display car details
    car1.displayInfo();

    return 0;
}
