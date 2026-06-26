package ArrayBasics;

import java.util.*;

public class AccessArrauElements {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array :");
        int n = sc.nextInt();
        int arr[]= new int[n];
        System.out.println("Enter the array elements : ");
        for(int i =0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(arr[3]);
    }
}
