package Java.As1;
import java.util.Scanner;
class Discount{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter amount: ");
        double am = sc.nextDouble();
        if (am > 5000)
            am = am - (am * 20 / 100);
        else if (am >= 2000)
            am = am - (am * 10 / 100);
        System.out.println("Final Amount = " + am);
        sc.close();
    }
}