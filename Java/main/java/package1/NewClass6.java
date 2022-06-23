/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package package1;

/**
 *
 * @author Mujtahid
 */
/*
byte	1 byte	Stores whole numbers from -128 to 127
short	2 bytes	Stores whole numbers from -32,768 to 32,767
int	4 bytes	Stores whole numbers from -2,147,483,648 to 2,147,483,647
long	8 bytes	Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
float	4 bytes	Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
double	8 bytes	Stores fractional numbers. Sufficient for storing 15 decimal digits

char
 */
public class NewClass6 {

    public static void main(String[] args) {
        byte a = 50;
        int b = 40;
        int c = 700;
        a = (byte) b;

        /*
        System.out.println(b );
        b = c+1;
        System.out.println(b);
         */
        // celsius = (5/9.0) * (feh. -32)
        int celsius;
        int feh = 37;
        celsius = (int) ((5 / 9.0) * (feh - 32));
        System.out.println(celsius);
        char ch1 = 'a';
        System.out.println((char) ((int) ch1 + 1));
        /*
        int var1=5;
        System.out.println(var1);
        var1=6;
        System.out.println(var1);
        var1= 44+9;
         */

    }
}
