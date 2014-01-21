import java.util.Scanner;


public class ChefAndTheCakeI {

	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int [][] cake;
		int xStart = 0, yStart = 0;
		int xEnd = 0, yEnd = 0;
		int count = 0;
		
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		sc.nextLine();
	
		for(int i = 0; i < num; i++){
			cake = new int [1001][1001];
			xStart = sc.nextInt();
			yStart = sc.nextInt();
			xEnd = sc.nextInt();
			yEnd = sc.nextInt();
			
			for(int a = xStart+1; a <= xEnd; a++){
				
				for(int b = yStart+1; b <= yEnd; b++){
					
						cake[a][b] = 1;
						count++;
					}
			}
			
			
			sc.nextLine();
			//cake = new int [1001][1001];
			xStart = sc.nextInt();
			yStart = sc.nextInt();
			xEnd = sc.nextInt();
			yEnd = sc.nextInt();
			
			for(int a = xStart+1; a <= xEnd; a++){
				
				for(int b = yStart+1; b <= yEnd; b++){
					if(cake[a][b] != 1){
						cake[a][b] = 1;
						count++;
					}
				}
			}
			
			sc.nextLine();
			System.out.println(count);
			count = 0;
		}
	
	}

}
