package Basics;
import java.util.*;

public class sumOfN {
    public static int son(int n){
        int sum =0;
        for(int i =0;  i<=n; i++){
            sum+= i;

        }
        return sum;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Eneter the number : ");
        int n = sc.nextInt();
        int sofn = son(n);
        System.out.println("the sum of n numbers is "+ sofn);
    }
}
