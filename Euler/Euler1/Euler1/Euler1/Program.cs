using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Euler1
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            for (int a = 0; a < 1000; a++)
            {
                if (a % 5 == 0 || a % 3 == 0)
                {
                    sum += a;
                }
            }

            Console.WriteLine(sum);
        }
    }
}
