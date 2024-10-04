public class Car {
    // Attributes
    String make;
    String model;
    int year;
    int currentYear = 2024;

    // Constructor
    public Car(String x, String y, int z){
        make = x;
        model = y;
        year = z;
    }
    
    // Method to display car information
    public void displayInfo(){
        System.out.println(make + ", " + model + ", " + year);
    }
    
    public int getCarAge(){
        return currentYear - year;
    }
    
    public static boolean isSameCar(Car car1, Car car2){
        if(car1.make != car2.make) return false;
        if(car1.model != car2.model) return false;
        if(car1.year != car2.year) return false;
        return true;
    }

    public static void main(String[] args) {
            // Create a Car object
            Car car1 = new Car("mazda", "rx7", 1999);
            Car car2 = new Car("mazda", "miata", 1999);
            
            // Display car details
            car1.displayInfo();
            System.out.println(car1.getCarAge());
            car2.displayInfo();
            System.out.println(car2.getCarAge());
            
            System.out.println(isSameCar(car1, car2));
            
    }
}
