import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        int k = in.nextInt();
        int count = k;
        char p [] = new char[n];
       int asc[] = new int[n];
        int i=0;
     //   System.out.println(n);
        while(i<n){
            asc[i] = (int)s.charAt(i);
            if(asc[i]>64 && asc[i] <91){
                //System.out.println("in loop1");
                while(count>0){
                    if(asc[i]==90){
                        asc[i] = 65;
                        //System.out.println(asc[i]);
                       // System.out.println("entered");
                    }
                    else
                      asc[i]=asc[i]+1;
                    count--;
                    
                }
            }
            
           else if(asc[i]>96 && asc[i] <123){
                  //System.out.println("in loop2");
                while(count>0){
                    
                    if(asc[i] == 122 )
                        asc[i] = 97;
                    
                    else
                       asc[i]=asc[i]+1;
                    count--; 
                
                }
               
            }
            else{
                //System.out.print("else loop");
                asc[i] = asc[i];
            }
            
            p[i] = (char)asc[i];
        //  System.out.println(i);
        i++;
        count = k;
            
        }
        
        String b = new String(p);
        System.out.println(p);
    }
}
