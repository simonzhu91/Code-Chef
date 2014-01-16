#include<stdio.h>;
#include<math.h>;

int main(){

int numTimes = 0;
double L, D, S, C;
double result = 0;
scanf("%d", &numTimes);

while(numTimes != 0 ){

	scanf("%lf", &L);
	scanf("%lf", &D);
	scanf("%lf", &S);
	scanf("%lf", &C);

	result = S * pow((C+1), D-1);

	if(result >= L){
		printf("ALIVE AND KICKING\n");	
	}else{
		printf("DEAD AND ROTTING\n");
	}	
	
	numTimes --;
}

return 0;
}
