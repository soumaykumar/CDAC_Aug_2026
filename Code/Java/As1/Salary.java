package Java.As1;
import java.util.Scanner;
class Salary{
    double sal;
    int yr;
    Salary(double sal,int yr){
        this.sal=sal;
        this.yr=yr;
    }
    void calculate(){
        if(yr<2)
            System.out.println("Total Salary="+sal);
        else if(yr<=5)
            System.out.println("Total Salary="+(sal+sal*10/100));
        else
            System.out.println("Total Salary="+(sal+sal*20/100));
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter salary:");
        double sal=sc.nextDouble();
        System.out.print("Enter years:");
        int yr=sc.nextInt();
        Salary s=new Salary(sal,yr);
        s.calculate();
    }
}
