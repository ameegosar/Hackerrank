import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
           int t = scan.nextInt();
        
           
      for(int i=0; i<t; i++){
            long n = scan.nextLong();       
            long m = scan.nextLong();
            long s = scan.nextLong();
            long j=s;
            long count = m%n;
          
            if((s+count-1)%n != 0)   { 
           System.out.println((s+count-1)%n);
            }
          else
              System.out.println(n);
        
           
                
    }
    }
}
