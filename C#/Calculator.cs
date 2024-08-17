using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyFirstCSharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter your username\n");

            string Username = Console.ReadLine();

            Console.WriteLine("Hello" + Username);

            Console.ReadLine();
        }
    }
}
