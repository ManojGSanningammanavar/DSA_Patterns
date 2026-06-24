package Basics;
import java.util.*;

public class RiverseNumber {
    public static int reverse(int n){
        int reveNor = 0;
        while(n>0){
            int id = n%10;
            reveNor = (reveNor*10) + id;
            n /= 10;
        }
        return reveNor;
    }

        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter the number : ");
            int n = sc.nextInt();
            int reversed = reverse(n);
            System.out.println("the reversed number is : " +reversed);

        }
    }

