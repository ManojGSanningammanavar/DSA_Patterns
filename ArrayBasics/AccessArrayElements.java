package ArrayBasics;

import java.util.*;

public class AccessArrayElements {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array :");
        int n = sc.nextInt();
        int arr[]= new int[n];
        System.out.println("Enter the array elements : ");
        for(int i =0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        //access array
        System.out.println("Element at index 3 is "+arr[3]);

        // update array element and traversal  ;
        arr[5] = 5;
        System.out.println("The array elments after updation are : ");
        for(int val: arr){
            System.out.print(val);
            System.out.print(" ");
        }
    }
}
