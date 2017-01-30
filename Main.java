import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for(int i=1;i<=T;i++){
			int res = 0;
			int bNo =sc.nextInt();
			for (int j=1;j<=bNo;j++){
			int sNo= sc.nextInt();
			if(sNo>0){
				res = sNo + res;
			}
		}
			System.out.println("Case "+i+": "+res);
		}
			

}
}
