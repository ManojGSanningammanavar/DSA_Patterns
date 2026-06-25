package ArrayBasics;
import java.util.*;

public class ArrayCreation {
    public static void main(String[] args){
        int[] arr = new int[5];
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        for(int i =0; i<arr.length; i++){
            System.err.print(arr[i]);
            System.err.print(" ");
        }
        
    }
}
