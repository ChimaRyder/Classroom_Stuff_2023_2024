package Aug31;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Person p = new Person();

        System.out.println("What is your name?");
        p.name = sc.nextLine();

        System.out.println("What is your age?");
        p.setAge(sc.nextInt());

        //System.out.println(p.name + "'s age is " + p.age);
        p.eat();
        p.eat("cheese");
        p.eat(4, "burgers");
        p.eat("chicken", 5);

        System.out.println(p.getAge());
    }
}