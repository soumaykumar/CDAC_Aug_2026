package Java.As3;
import java.util.*;
public class Palindrome {
    public static void main(String[] args) {
        System.out.println("Enter a String:");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String rev="";
        int i=0;
        for(i=str.length()-1;i>=0;i--){
            rev = rev + str.charAt(i);
        }
        if(str.equals(rev)){
            System.out.println(str+"is a Palindrome");
        }
        else
            System.out.println(str +"is not a Palindrome");
    }
   
}
