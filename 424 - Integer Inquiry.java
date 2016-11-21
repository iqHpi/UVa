import java.util.Scanner;
import java.math.BigInteger;

public class Main{
	public static void main( String[] args ){
		//declare biginteger objects
		BigInteger num, sum;
		Scanner scan = new Scanner(System.in);
		sum = BigInteger.ZERO; //predefined BigInteger values
		
		while( true ){
			num = scan.nextBigInteger();
			if( num.compareTo(BigInteger.ZERO) == 0 ) break;
			sum = sum.add(num);
		}
		System.out.println( sum );
	}
}
