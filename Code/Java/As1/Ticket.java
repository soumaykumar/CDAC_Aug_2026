package Java.As1;
import java.util.Scanner;
class Ticket{
    int age;
    Ticket(int age){
        this.age=age;
    }
    void price(){
        if(age<5)
            System.out.println("Ticket Price : Free");
        else if(age<=18)
            System.out.println("Ticket Price : 100");
        else if(age<=60)
            System.out.println("Ticket Price : 200");
        else
            System.out.println("Ticket Price : 150");
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter age: ");
        int age=sc.nextInt();
        Ticket t=new Ticket(age);
        t.price();
    }
}