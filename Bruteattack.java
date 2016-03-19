package brute;

class Bruteattack {

	
	long answer(long A, long B, long N){
		
		long ans =0,key =1;
		long i, k;
		
		 for(i=A;i<=B;i++){
			    //System.out.println(B);
			    for(k=1;k<=i;k++){
			     key = key*N;
			     
			    }
			    ans = ans + key;
			    key =1;
			    //System.out.println(ans);
			   }
			 
		
		
		
		return ans;
		
	}
	
}
