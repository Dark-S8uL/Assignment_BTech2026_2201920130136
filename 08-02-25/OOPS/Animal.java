// Abstract class
abstract class Animal {
    abstract void makeSound();

    public void sleep() {
        System.out.println("Sleeping...");
    }
}

// Dog class (inherits Animal)
class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Dog barks: Woof! Woof!");
    }
}

// Cat class (inherits Animal)
class Cat extends Animal {
    @Override
    void makeSound() {
        System.out.println("Cat meows: Meow! Meow!");
    }
}

public class AbstractionExample {
    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat();

        dog.makeSound();
        cat.makeSound();
        dog.sleep();
    }
}
