package Java.As3;
import java.util.*;
public class UpperCase{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string:");
        String s=sc.nextLine();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch>='a' && ch<='z'){
                ch=(char)(ch-32);
            }
            System.out.print(ch);
        }
    }
}
