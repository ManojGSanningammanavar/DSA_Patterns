import java.util.*;
public class basic{
public static void main(String[] args) {
    System.out.println("Hello DSA!");
    double a = 89.89890354;
    int b = (int) a;
    System.out.println(b);

    //string to int or double
    String str = "1234";
    int num = Integer.parseInt(str);
    System.out.println(num);

    //int to string
    int p = 1234;
    String str1 = String.valueOf(p);
    System.out.println(str1);

    //char to int
    char ch = '7';
    int w = ch - '0';
    System.out.println(w);
}
}