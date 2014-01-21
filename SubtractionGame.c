#include<stdio.h>;
#include<math.h>;

int game (int a, int b, int turn);

int game (int a, int b, int turn){
	int min, max;
	int r;
	
	while(a != 0 && b != 0){
		// finds the min of a and b
		max = a > b ? a : b;
		min = a < b ? a : b;
		
		if(min == 1 && max == 1){
			return turn ? 0 : 1;
		}
		
		else if(min == 1 && max != 1){
			return turn;
		}
		
		// if max can be evenly divided by min
		if(max % min == 0){
			return a / b - 1;
			//return game(min, max - (max / min - 1) * min, turn ? 0 : 1);
		}else{
			// switch turns 
			return game(min, max % min, turn ? 0 : 1);
		}
		
	}
	
	// if turn == true, return 0, else return 1
	// if first player's turn, then he loses, return 0
	// if 2nd players turn, then player 1 wins, return 1
	return turn;
	
}

int main(void){
	int a, b;
	int num;
	int cases;
	int i = 0;
	int j = 0;	
	
	// keeps track of who won!
	int s = 0;

	scanf("%d", &num);

	for(i = 0; i < num; i++){
		scanf("%d", &cases);
		s = 0;

		for(j = 0; j < cases; j++){
			
			scanf("%d%d", &a, &b);
			
			// ors the results together, if any wins for player 1, then he wins
			// originally player 1's turn
			s |= game(a, b, 1);
		
		}

		if (s)
			printf("YES\n");
		else
			printf("NO\n");	
		
	}
	
		
	
	return 0;
}
