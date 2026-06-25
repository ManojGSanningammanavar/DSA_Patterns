package ArrayBasics;
import java.util.*;

public class reverseArray {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the array size: ");
    int n = sc.nextInt();
    int arr[] = new int[n];
    System.out.println("Enter the array elements : ");
    for(int i =0; i<n; i++){
        arr[i] = sc.nextInt();
    }

    int rev[] = new int[n];
    
    for(int i = 0; i<n; i++){
        rev[i] = arr[arr.length-1-i];
    }

    System.out.println("The array reversed as : ");
    for(int i =0; i<rev.length; i++){
        System.out.print(rev[i]);
        System.out.print(" ");
    }
}
}
