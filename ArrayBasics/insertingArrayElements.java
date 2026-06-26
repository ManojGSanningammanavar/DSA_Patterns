package ArrayBasics;
import java.util.*;

public class insertingArrayElements {
    public static void main(String[] args) {
        int arr[] ={1, 2, 4, 5, 8, 9, 0, 6};
        Scanner sc = new Scanner(System.in);
        int pos, val;
        System.out.print("Enter the position that u want to add elemnt in : ");
        pos = sc.nextInt();
        System.out.print("Enter the value : ");
        val = sc.nextInt();

        if(pos<0 || pos>arr.length){
            System.out.println("INvalid pos!");
        }
        
        for(int i =arr.length-1; i>pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = val;
        int size = arr.length;
        size++;
        
        for(int i =0; i<arr.length; i++){
            System.out.print(arr[i]);
            System.out.println(" ");
        }
    }
}
