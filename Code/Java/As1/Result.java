package Java.As1;
import java.util.Scanner;
class Result{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter marks of 3 subjects: ");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        if(a>=35&&b>=35&&c>=35)
            System.out.println("Pass");
        else
            System.out.println("Fail");
    }
}