import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int l = S.length();
        int count =0;
        if(l%3==0){
            int num_msgs = 12/3;
            for(int i=0; i<l; i++){
                if((i%3==0 || (i+1)%3==0) && S.charAt(i) != 'S'){
                    //System.out.println("String is" + t);
                    count++;
                }
                else if((i-1)%3==0 && S.charAt(i) != 'O'){
                    count++;
                }
               }
            System.out.println(count);
        }
    }
}
