class Car {
    private String model;
    private String brand;
    private int speed;

    // Constructor
    public Car(String model, String brand, int speed) {
        this.model = model;
        this.brand = brand;
        this.speed = speed;
    }

    // Getter and Setter methods
    public String getModel() {
        return model;
    }

    public String getBrand() {
        return brand;
    }

    public int getSpeed() {
        return speed;
    }

    public void accelerate(int increase) {
        if (increase > 0) {
            speed += increase;
            System.out.println(brand + " " + model + " accelerated to " + speed + " km/h.");
        } else {
            System.out.println("Invalid acceleration value.");
        }
    }

    public void brake(int decrease) {
        if (decrease > 0 && speed >= decrease) {
            speed -= decrease;
            System.out.println(brand + " " + model + " slowed down to " + speed + " km/h.");
        } else {
            System.out.println("Invalid brake value.");
        }
    }

    public static void main(String[] args) {
        Car car = new Car("Model S", "Tesla", 0);
        car.accelerate(50);
        car.brake(20);
    }
}
