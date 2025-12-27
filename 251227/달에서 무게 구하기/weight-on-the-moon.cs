using System;

public class Codetree
{  
    public static void Main()
    {
        int mass = 13;
        double gravity = 0.165;

        Console.WriteLine($"{mass} * {gravity:N6} = {mass*gravity:N6}");
    }
}
