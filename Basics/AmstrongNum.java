package Basics;
import java.util.*;

public class AmstrongNum {
    public static void main(String[] args){
        int num;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        int dup = num;
        int k = String.valueOf(dup).length();
        int sum =0;
        while (num>0) {
            int ld = num % 10;
            sum += Math.pow(ld,k);
            num /= 10;
        }
        if(sum == dup){
            System.out.println("The number is armstrong");
        }
        else{
            System.out.println("NOt amstrong ");
        }
    }
}
