using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
 */

namespace Euler3
{
    class Program
    {
        static long number = 600851475143;
        static long numm = number;
        static long largest = 0;
        static void Main(string[] args)
        {
            for (int i = 2; i * i <= numm; i++) //something we only need to check up to the square root
            {
                if (numm % i == 0)
                {
                    numm = numm / i;
                }
            }

            Console.WriteLine("The largest prime of 600851475143 is: " + numm);
        }

    }
}
