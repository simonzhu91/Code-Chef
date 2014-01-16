#include<stdio.h>;
#include <stdbool.h>;

void hasSubstring(int* arr, int numLines);

int main(){

int * arr = (int *) malloc(sizeof(int) * 9000000);
int i = 0;
int a = 0;
int temp = 0;
int numLines;
scanf("%d", &numLines);

while(i < numLines){

printf("each line");

// whenever read in a '\n', then increment i
while (temp = fgetc( stdin )  != '\n' ){

printf("enter was pressed");
arr[a] = temp;
a++;

}

// separates rows of the data by -1
arr[a] = -1;
a++;

i++;
}

hasSubstring(&a, numLines);

free(arr);

return 0;
}


//[1 1 1 0 0 -1 0 0 1 0]
void hasSubstring(int* arr, int numLines){
	int count = 0;
	int i = 0;
	bool flag = false;

	while(count < numLines){
		
		if(arr[i] == 0 && arr[i+1] == 1 && arr[i+2] == 0 
		|| arr[i] == 1 && arr[i+1] == 0 && arr[i+2] == 1){
			printf("Good\n");
			flag = true;
		}

		if(arr[i] == -1){
			count++;

			if(flag == false){
				printf("Bad\n");			
			}else{
				flag = true;			
			}		
		}
	}

}
