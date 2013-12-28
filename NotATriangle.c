#include<stdio.h>

// quickSort

void quickSort(int *arr,int start ,int end)
        {
             if(start >= end)
                      return;
        	int i, j,key;
        	key = arr[(start + end)/2];

        	i = start;
        	j = end;
        	while(1)
        	{
        	while( arr[i] < key )
        		i++;
        	while(arr[j] > key)
        		j--;
        	//swap the two pos
        	if(i<=j){
        	int temp = arr[i];
        	arr[i] = arr[j];
        	arr[j] = temp;
        	i++;
        	j--;
        	}
        	if ( i > j)
        	   break;
        		}
        	
        	quickSort(arr,start,j);
         
        	quickSort(arr,i,end);
        }

int main(){

int l,r, n, a, count = 0;
int arr[2000] = {0}; // initialize all values of arr to 0

while(1){

scanf("%d", &n);

if(n == 0)
break;

for(a = 0; a < n; a++){

scanf("%d", &arr[a]);

}

quickSort(arr, 0, n-1);

for(a = n-1; a >= 2; a--){
l = 0;
r = a - 1;

while(l < r){
if(arr[l] + arr[r] < arr[a]){
count += r-l;
l++;
}
else{
r--;
}
}

}	
printf("%d\n", count);
count = 0;
}
return 0;
}
