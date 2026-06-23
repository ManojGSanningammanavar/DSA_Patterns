package Basics;
import java.util.*;
public class DecimalToBinary {
    public static int bintodec(int n ){
        int binary =0;
        int place = 1;
        while(n>0){
            int rem = n%2;
            binary += (rem * place);
            place *= 10;
            n = n/2;
        }

        return binary;
    }

    public static void main(String[] args){
        int n ;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number n : ");
        n= sc.nextInt();
        int bin = bintodec(n);
        System.out.print("The binnary number is "+ bin);
    }
}
