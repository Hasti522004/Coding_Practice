// Example of an interface with a default method
interface Vehicle {
    // Abstract method (without a body)
    void start();

    // Default method with a body
    default void stop() {
        System.out.println("Vehicle is stopping");
    }
}

// Implementing class
class Car implements Vehicle {
    // Implementing the abstract method
    @Override
    public void start() {
        System.out.println("Car is starting");
    }

    // No need to override the default method stop(), but you can if you want to change the behavior
}

// Main class to test the implementation
class Test {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.start(); // Output: Car is starting
        myCar.stop();  // Output: Vehicle is stopping
    }
}
