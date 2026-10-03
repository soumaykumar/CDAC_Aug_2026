import java.util.*;
class Teacher{
    String name,qual;
    Teacher(String name,String qual){
        this.name=name;
        this.qual=qual;
    }
    void getDetails(){
        System.out.println("Name: "+name);
        System.out.println("Qualification: "+qual);
    }
    void showDetails(){}
}
interface college{
    String cname="CDAC Noida";
    void getDetails();
    void showDetails();
    default void msg(){
        System.out.println("Welcome to College");
    }
    static void collegeName(){
        System.out.println("College: "+cname);
    }
}

class Department extends Teacher implements college{
    int no;
    String dept;
    Department(String name,String qual,int no,String dept){
        super(name,qual);
        this.no=no;
        this.dept=dept;
    }

    public void getDetails(){
        super.getDetails();
        System.out.println("Dept No: "+no);
        System.out.println("Dept Name: "+dept);
    }

    public void showDetails(){
        System.out.println("Details displayed");
    }
}
public class CMS{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Name: ");
        String n=sc.nextLine();
        System.out.print("Enter Qualification: ");
        String q=sc.nextLine();
        System.out.print("Enter Department: ");
        String d=sc.nextLine();
        int no;
        if(d.equalsIgnoreCase("IT dept"))
            no=10;
        else if(d.equalsIgnoreCase("Management dept"))
            no=20;
        else{
            System.out.println("not a valid Record");
            return;
        }
        Department x=new Department(n,q,no,d);
        college.collegeName();
        x.msg();
        x.getDetails();
        x.showDetails();
    }
}