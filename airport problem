/* At an airport you have a timetable for arrivals and departures.
 * You need to determine the minimum number of gates you*d need to provide so that all the planes can be placed at a gate as per their schedule.
 * The arrival and departure times for each plane are presented in two arrays, sorted by arrival time, and you're told the total number of flights for the
 * day. Assume that no planes remain overnight at the airport; all fly in and back out on the same day. Assume that if a plane departs in the same minute as another plane arrives, the arriving plane takes priority (i.e. you'll still need the gate for the departing plane). Write a function that returns
 * the minimum number of gates needed for the schedules you're given.
 * Example:
 * arrQ = {900, 940, 950, 1100,1500,1800}
 * depQ = {910,1200,1120, 1130,1900, 2000}
 * flights = 6
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Airport_Problem
{
    class Program
    {
        static void Main(string[] args)
        {
            int size;
            size =  Convert.ToInt16(Console.ReadLine());
            int [] arr = new int [size];
            int [] dep = new int [size];
            Console.WriteLine(size);
            Dictionary<int, int> d = new Dictionary<int, int>();
            for(int i=0; i<size; i++)
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
              
            }

            for (int i = 0; i < size; i++)
            {
                dep[i] = Convert.ToInt32(Console.ReadLine());
            }
           
            for(int i=0; i<size; i++)
            {
                int a = arr[i];
                int b = dep[i];
                for(int j=a; j<b; j++)
                {
                    
                    if(!d.ContainsKey(j))
                    {
                        d.Add(j, 1);
                    }
                    else
                    {
                        d[j]++;
                    }
                }
            }
            int max = 0;
            foreach(KeyValuePair<int,int> k in d)
            {
                if (k.Value > max)
                {
                    max = k.Value;
                }
            }
            Console.WriteLine(max);
            Console.ReadLine();
            
        }
    }
}
