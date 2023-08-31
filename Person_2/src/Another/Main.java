package Another;

import Aug31.Person;

import java.sql.SQLOutput;

public class Main {
    public static void main(String[] args) {
        Person p = new Person();
        Person q = new Person();
        Person a = q;
        q.setAge(25);
        q.setName("Andrew");
        System.out.println(a.getAge());
        a.setAge(30);
        System.out.println(q.getAge());

        Person.noOfmate = 5;

        System.out.println(q.noOfmate);
    }
}
