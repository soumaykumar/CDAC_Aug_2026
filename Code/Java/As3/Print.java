package Java.As3;
import java.util.*;
public class Print{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str[]= new String[5];
        for(int i=0;i<5;i++){
            System.out.println("Enter Name:");
            str[i] = sc.next();
        }
        for(String k:str){
            System.out.println(k);
        }
    }  
}
