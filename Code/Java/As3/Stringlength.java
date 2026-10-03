package Java.As3;
import java.util.*;
public class Stringlength{
    static int count(String str){
        return str.length();
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter string:");
        String str=sc.nextLine();

        int result=count(str);

        System.out.println("Length of string: "+result);
    }
}