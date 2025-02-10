// Parent class
class Vehicle {
    String brand;

    public Vehicle(String brand) {
        this.brand = brand;
    }

    public void honk() {
        System.out.println(brand + " goes Beep! Beep!");
    }
}

// Child class
class Car extends Vehicle {
    private int speed;

    public Car(String brand, int speed) {
        super(brand);
        this.speed = speed;
    }

    public void displaySpeed() {
        System.out.println(brand + " is running at " + speed + " km/h.");
    }

    public static void main(String[] args) {
        Car myCar = new Car("Toyota", 120);
        myCar.honk();
        myCar.displaySpeed();
    }
}
