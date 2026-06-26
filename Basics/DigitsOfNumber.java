package Basics;
import java.util.*;

public class DigitsOfNumber {
    public static int digits(int n){
        int count =0;
        while(n > 0){
            n /= 10;
            count += 1; 
        }
        return count;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int n = sc.nextInt();
        int digit = digits(n);
        System.out.println("The number of digits in the give number is : "+digit);

    }
}
