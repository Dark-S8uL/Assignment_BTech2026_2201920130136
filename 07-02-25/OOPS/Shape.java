// Base class
class Shape {
    public void draw() {
        System.out.println("Drawing a shape.");
    }
}

// Derived class (Circle)
class Circle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a Circle.");
    }
}

// Derived class (Rectangle)
class Rectangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a Rectangle.");
    }
}

public class PolymorphismExample {
    public static void main(String[] args) {
        Shape shape1 = new Circle();
        Shape shape2 = new Rectangle();

        shape1.draw(); // Calls Circle's draw method
        shape2.draw(); // Calls Rectangle's draw method
    }
}
