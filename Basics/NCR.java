package Basics;
import java.util.*;
public class NCR {
    public static int fact(int n){
        int fact = 1;
        for(int i =1; i <=n; i++){
            fact *= i;
        }
        return fact;
    }

    public static int ncr(int n , int r){
        int fact_n = fact(n);
        int fact_r = fact(r);
        int fact_nr = fact(n-r);

        int nCr = fact_n / (fact_r  * fact_nr);

        return nCr;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the n Value : ");
        int n = sc.nextInt();
        System.out.println("Enter the r value : ");
        int r = sc.nextInt();

        int binoCoeff = ncr(n,r);

        System.out.println(binoCoeff);

    }
}
