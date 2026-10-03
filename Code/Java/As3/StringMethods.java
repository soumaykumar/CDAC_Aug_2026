package Java.As3;
import java.util.*;
public class StringMethods{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string:");
        String str=sc.nextLine();
        System.out.println("Length: "+str.length());
        System.out.println("Uppercase: "+str.toUpperCase());
        System.out.println("Lowercase: "+str.toLowerCase());
        System.out.println("First character: "+str.charAt(0));
        System.out.println("Contains 'a': "+str.contains("a"));
        System.out.println("Trim: "+str.trim());
    }
}