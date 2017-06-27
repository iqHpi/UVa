pwr = [1 for i in range(0, 151)]

while True:
    try:
        N, A = map(int, input().split())
        
        pwr[1] = A
        for i in range(2, N+1):
            pwr[i] = pwr[i - 1] * A
            
        ans = 0
        for i in range(1, N+1):
            ans += (pwr[i] * i)
            
        print("%s" % ans)
        
    except EOFError:
        break

"""
import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main{
	public static void main( String[] args ){
		
		//declare biginteger objects
		BigInteger N, A, ans, temp;
		
		Scanner scan = new Scanner(System.in);
		
		while( true ){
			try{
				N = scan.nextBigInteger();
				A = scan.nextBigInteger();
				ans = BigInteger.ZERO; //predefined BigInteger values
				
				for(int i = 1; i <= N.intValue(); i++){
					//ans = ans.add( BigInteger.valueOf(i).multiply( A.pow(i) ));
					
					temp = BigInteger.valueOf(i);
					temp = temp.multiply( A.pow(i) );
					ans = ans.add(temp);
				}
				System.out.println(ans);
			}
			catch(Exception e){
				break;
			}
		}
	}
}
"""
