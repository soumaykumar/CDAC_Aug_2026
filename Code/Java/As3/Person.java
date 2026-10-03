package Java.As3;
import java.util.*;
public class Person{
    static void display(String name,int age,double salary){
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Salary: "+salary);
    }
    public static void main(String[] args){
        String name=args[0];
        int age=Integer.parseInt(args[1]);
        double salary=Double.parseDouble(args[2]);
        display(name,age,salary);
    }
}