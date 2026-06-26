package ArrayBasics;
import java.util.*;

public class largestElement {
    public static void main(String[] args) {
        int arr[]={12,4,78,90,543,768,546,9};
        int largest =0;
        for(int i =0 ; i<arr.length; i++){
        if(arr[i]>largest){
            largest= arr[i];
        }
    }
        System.out.println("The largest element : "+largest);

        int smallest = arr[0];
        for(int i =0 ; i<arr.length; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
        System.out.println("Smallest element: "+smallest);
    }
}
