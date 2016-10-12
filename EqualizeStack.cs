using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        string[] tokens_n1 = Console.ReadLine().Split(' ');
        int n1 = Convert.ToInt32(tokens_n1[0]);
        int n2 = Convert.ToInt32(tokens_n1[1]);
        int n3 = Convert.ToInt32(tokens_n1[2]);
        string[] h1_temp = Console.ReadLine().Split(' ');
        int[] h1 = Array.ConvertAll(h1_temp,Int32.Parse);
        string[] h2_temp = Console.ReadLine().Split(' ');
        int[] h2 = Array.ConvertAll(h2_temp,Int32.Parse);
        string[] h3_temp = Console.ReadLine().Split(' ');
        int[] h3 = Array.ConvertAll(h3_temp,Int32.Parse);
  
        int i, j, k, sum1 = 0, sum2 = 0, sum3 = 0, min = 0;
        i = n1;
        while(i > 0)
        {
            sum1 = sum1 + h1[--i];
        }
        
        j = n2;
        while(j > 0)
        {
            sum2 = sum2 + h2[--j];
        }
        
        k = n3;
        while(k > 0)
        {
            sum3 = sum3 + h3[--k];
        }
        /*
        Console.WriteLine(sum1);
        Console.WriteLine(sum2);
        Console.WriteLine(sum3);
        */
        
        min = sum1;
        if(sum2 < min)
            min = sum2;
        if(sum3 < min)
            min = sum3;
        
        while(sum1 != sum2 || sum2 != sum3 || sum1 != sum3)
        {
            min = sum1;
            if(sum2 < min)
                min = sum2;
            if(sum3 < min)
                min = sum3;
            
            while(sum1 > min)
            {
                sum1 = sum1 - h1[i++];
                
        //Console.WriteLine(sum1);
            }
            
            while(sum2 > min)
            {
                sum2 = sum2 - h2[j++];
                
        //Console.WriteLine(sum2);
            }
            
            while(sum3 > min)
            {
                sum3 = sum3 - h3[k++];
                
       // Console.WriteLine(sum3);
            }
        }
        Console.WriteLine(min);
    }
}
