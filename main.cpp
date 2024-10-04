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
        int currentYear = 2024;
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
        
        int getCarAge(){
            return currentYear - year;
        }
};

 
bool isSameCar(Car car1, Car car2){
    if(car1.make != car2.make) return false;
    if(car1.model != car2.model) return false;
    if(car1.year != car2.year) return false;
    return true;
}

int main() {
    // Create a Car object
    Car car1("mazda", "rx7", 1999);
    Car car2("mazda", "miata", 1999);
    // Display car details
    car1.displayInfo();
    cout << car1.getCarAge() << "\n";
    car2.displayInfo();
    cout << car2.getCarAge() << "\n";
    cout << isSameCar(car1, car2) << "\n";
    

    return 0;
}
