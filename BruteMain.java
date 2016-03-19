package brute;
import java.util.Scanner;



public class BruteMain {


 public static void main(String args[]){
 
  
  long A,B,N,C;
  long key=1 ,ans=0;
  long i,j,k;
 
  Scanner s = new Scanner(System.in);
  Bruteattack Ba = new Bruteattack();
  C = s.nextLong();
  
  
  for(j=0;j<C;j++){
   

   System.out.println("A B N");
   
   A = s.nextLong();
   B = s.nextLong();
   N = s.nextLong();
   
   
   ans = Ba.answer(A,B,N);
   
   //System.out.println(A);
   if(ans>1000000007){ans = ans % 1000000007;}
   System.out.println(ans);
   //ans =0;
   //key =1;
   
  }
  System.out.println("³¡");
 
} 

}