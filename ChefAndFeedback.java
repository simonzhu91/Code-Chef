import java.util.*;
import java.lang.*;

public class ChefAndFeedback{
	
	public static void main(String[] args){
		boolean flag = false;
		Scanner sc = new Scanner(System.in);
		int numTimes = sc.nextInt();
		sc.nextLine();
	
		for(int i = 0; i < numTimes; i++){
			String line = sc.nextLine();
			for(int a = 0; a < line.length() - 2; a++){
				if(line.charAt(a)== '1' && line.charAt(a+1) == '0' && line.charAt(a+2) == '1' 
				|| line.charAt(a)== '0' && line.charAt(a+1) == '1' && line.charAt(a+2) == '0'){
					System.out.println("Good");
					flag = true;
					break;
				}				
			}
			if(flag == false){			
				System.out.println("Bad");
			}else{
				flag = false;			
			}
		}

	}
}
