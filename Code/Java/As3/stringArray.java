package Java.As3;
import java.util.*;
public class stringArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str[] = new String[5];
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter Name:");
            str[i] = sc.nextLine();
            char ch = str[i].charAt(0);
            if (ch >= 'a' && ch <= 'z') {
                ch = (char)(ch - 32);
                str[i] = ch + str[i].substring(1);
            }
        }
        System.out.println("Result Array");
        for (String k : str) {
            System.out.println(k);
        }
    }
}
