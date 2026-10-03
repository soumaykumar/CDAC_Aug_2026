import java.util.*;

public class Student {
    String name;
    int id;
    double grade;
    Student(String name,int id,double grade){

        this.name=name;
        this.id=id;
        this.grade=grade;
    }
    void displayStudents(){

        System.out.println(name+" "+id+" "+grade);
    }
    static void sortStudents(Student studentArray[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(studentArray[j].grade>studentArray[j+1].grade){
                    Student temp=studentArray[j];
                    studentArray[j]=studentArray[j+1];
                    studentArray[j+1]=temp;
                }
            }
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Student studentArray[]=new Student[3];
        for(int i=0;i<3;i++){
            System.out.print("Enter name: ");
            String name=sc.nextLine();
            System.out.print("Enter id: ");
            int id=sc.nextInt();
            System.out.print("Enter grade: ");
            double grade=sc.nextDouble();
            sc.nextLine();
            studentArray[i]=new Student(name,id,grade);
        }
        System.out.println("Student Details:");
        for(int i=0;i<3;i++){

            studentArray[i].displayStudents();
        }
        sortStudents(studentArray,3);
        System.out.println("Students after sorting:");
        for(int i=0;i<3;i++){
            studentArray[i].displayStudents();
        }
    }
}