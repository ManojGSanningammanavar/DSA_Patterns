package Basics;
import java.util.*;
public class SumOfDigitsofN {
    public static int sumOfDigits(int n){
        int digitSum=0;
        while(n>0){
            int lastDigit = n % 10;
            n/=10;
            digitSum += lastDigit;
        }
        return digitSum;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number n : ");
        int n = sc.nextInt();
        int sod = sumOfDigits(n);
        System.out.println("the sum of digits is : " + sod);

    }
}
