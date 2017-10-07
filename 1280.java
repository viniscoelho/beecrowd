import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main ( String [] args ){
		BigInteger x = new BigInteger("0");
		BigInteger y = new BigInteger("0");
		int n;
		final BigInteger ONE = new BigInteger("1");
		final BigInteger ZERO = new BigInteger("0");
		Scanner scan = new Scanner(System.in);
		n = scan.nextInt();
		for ( int i = 0; i < n; ++i ){
			x = scan.nextBigInteger();
			y = scan.nextBigInteger();
			if ( x.equals(ZERO) ){
				y = y.add(ONE);
				System.out.println(y);
			}
			else if ( x.equals(ONE) ){
					y = y.add(new BigInteger("2"));
					System.out.println(y);
			}
			else if ( x.equals(new BigInteger("2")) ){
					BigInteger sum = new BigInteger("0");
					sum = (y.multiply(new BigInteger("2"))).add(new BigInteger("3"));
					System.out.println(sum);
			}
			else if ( x.equals( new BigInteger("3")) ){
					BigInteger sum = new BigInteger("0");
					BigInteger TWO = new BigInteger("2");
					sum = (TWO.pow(y.intValue()+3)).subtract(new BigInteger("3"));
					System.out.println(sum);
			}
			else{
				BigInteger TWO = BigInteger.ZERO;
				TWO = TWO.add(BigInteger.valueOf(2));
				for ( int j = 0; j < y.intValue()+2; j++ )
					TWO = BigInteger.valueOf(2).pow(TWO.intValue());
				System.out.println(TWO.subtract(BigInteger.valueOf(3)));
			}
		}
	}
}
