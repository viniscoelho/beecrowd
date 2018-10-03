import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    final static BigInteger TWO = new BigInteger("2");
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        BigInteger num;
        int t, b, ans;
        t = scan.nextInt();
        for ( int i = 0; i < t; i++ )
        {
            num = scan.nextBigInteger();
            ans = 0;
            while ( num.compareTo(BigInteger.ZERO) != 0 )
            {
                b = num.mod(TWO).intValue();
                num = num.divide(TWO);
                if ( b == 1 ) ans++;
            }
            System.out.println(ans);
        }
    }
}