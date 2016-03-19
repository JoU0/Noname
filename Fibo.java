import java.util.Scanner;



public class Fibo {

	public static int calc(int a){

	int ans;
		
		if (a == 1) ans = 1;
		else if (a == 2) ans = 2;
		
		else ans = calc(a-2) + calc(a-1);
		
		ans = ans% 1000000007;
		
		return ans;
	}
	
	
	public static void main(String args[]){
	
		int C,i,n,ans; //테스트 케이스의 수
	Scanner s = new Scanner(System.in);
		
	
	System.out.println(" 테스트 케이스의 수");
	
	C = s.nextInt();
	
	for(i=0;i<C;i++){
		
		
		n = s.nextInt();
		
		ans = calc(n);
		
		System.out.println(ans);
		
	}
	System.out.println("끝");
	}
}
