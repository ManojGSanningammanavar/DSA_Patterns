package ArrayBasics;
import java.util.*;

public class CountNoOfZero {
    public static void main(String[] args) {
        int arr[]= {1,4,65,0,23,0,45,9,67,0};

        int count =0;
        int sum =0;

        for(int i =0; i<arr.length; i++){
            if(arr[i]==0){
                count++;
            }
            sum += arr[i];
        }
        System.out.println(count);
        System.out.println("the sum of array elements: "+sum);
    }    
}
