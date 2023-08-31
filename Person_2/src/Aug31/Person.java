package Aug31;

public class Person {
    String name;
    private int age; // set to private
    public static int noOfmate = 0;

    //Getter
    //Encapsulation
    public int getAge()
    {
        return age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    //Setter - private items can be set through setter
    public void setAge(int age)
    {
        this.age = age; //this keyword refers to the fields
    }

    //Method Overloading - same name methods with a signature difference
    void eat()
    {
        System.out.println(name + " is eating.");
    }

    void eat(String food)
    {
        System.out.println(name + " is eating " + food);
    }

    void eat(String food, int quantity)
    {
        System.out.println(name + " is eating "+ food + " " + quantity + " times.");
    }

    void eat(int carbs, String food)
    {
        System.out.println(name + " is eating " + food + " with " + carbs + " carbs.");
    }
}
