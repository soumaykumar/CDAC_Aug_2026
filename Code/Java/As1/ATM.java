package Java.As1;
import java.util.Scanner;
class ATM{
    int pin;
    double bal,with;
    ATM(int pin,double bal,double with){
        this.pin=pin;
        this.bal=bal;
        this.with=with;
    }
    void check(){
        if(pin==6705){
            if(with<=bal){
                if(bal-with>=1000)
                    System.out.println("Withdrawal Successful");
                else
                    System.out.println("Minimum Balance should be 1000");
            }
            else
                System.out.println("Insufficient Balance");
        }
        else
            System.out.println("Invalid PIN");
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter PIN:");
        int pin=sc.nextInt();
        if(pin==6705){
            System.out.print("Enter Balance:");
            double bal=sc.nextDouble();
            System.out.print("Enter Withdrawal:");
            double with=sc.nextDouble();

            ATM a=new ATM(pin,bal,with);
            a.check();
        }
        else
            System.out.println("Invalid PIN");
    }
}