// Base class (Parent)
class Employee {
    String name;
    double salary;

    // Constructor
    public Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public void display() {
        System.out.println("Employee: " + name + ", Salary: $" + salary);
    }
}

// Derived class (Child)
class Manager extends Employee {
    private double bonus;

    public Manager(String name, double salary, double bonus) {
        super(name, salary); // Calling the parent class constructor
        this.bonus = bonus;
    }

    @Override
    public void display() {
        System.out.println("Manager: " + name + ", Salary: $" + salary + ", Bonus: $" + bonus);
    }

    public static void main(String[] args) {
        Employee emp = new Employee("Alice", 50000);
        Manager mgr = new Manager("Bob", 70000, 10000);

        emp.display();
        mgr.display();
    }
}
