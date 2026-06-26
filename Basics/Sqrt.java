package Basics;
import java.util.*;

public class Sqrt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        
        //Brute force
        int ans =0;
        for(int i =0; (long)i*i <= n; i++){
            ans = i;
        }
        System.out.println(ans);
    }
}
