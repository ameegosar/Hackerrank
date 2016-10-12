import java.util.Arrays;
import java.util.Scanner;
public class Solution {
 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] cost =new int[n];
        for(int a0 = 0; a0 < n; a0++){
            String s = in.next();
            int count=1;
            char[] c = s.toCharArray();
            Arrays.sort(c);
            for(int i=0;i<c.length-1;i++)
                if(c[i]!=c[i+1])
                count++;
             cost[a0]=count;
        }
        for(int i=0;i<n;i++)
            System.out.println(cost[i]);
    }
}
