import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int [] ar = new int[input.nextInt()];
        
        for(int i=0; i<ar.length; i++){
            ar[i] = input.nextInt();
        }
        quicksort(ar,0,ar.length-1);
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
    
    static void quicksort(int[] ar, int left, int right){
        if(left < right){
        int index = partition(ar, left,right);
        //    System.out.println("recurison left =" + left + "index = " + index);
        quicksort(ar,left,index-1);
        //    System.out.println("recurison right =" + right + "index = " + index);
        quicksort(ar,index+1,right);
        }
        
    }
    
    static int partition(int[] ar, int left, int right){
        int pIndex = left;
        int tmp =0;
        int pivot = ar[right];
        for(int i=left; i<=right-1; i++){
            if(ar[i] <= pivot){
               tmp = ar[i];
               ar[i] = ar[pIndex];
                ar[pIndex] = tmp;
                pIndex++;
            }
        }
        tmp = ar[pIndex] ;
        ar[pIndex] = ar[right];
        ar[right] = tmp;
          for(int i=0; i<ar.length; i++){
           System.out.print(ar[i]);
              System.out.print(" ");
        }
        System.out.println();
            return pIndex;
        }
    }
