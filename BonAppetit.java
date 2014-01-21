import java.util.*;
import java.io.*;

//public class Main{

public class BonAppetit{

public class Person{


	int cabin;
	int start;
	int end;

	public Person(int s, int e, int c){
		cabin = c;
		start = s;
		end = e;

	}

}

public class PersonComparator implements Comparator<Person>{

	public int compare(Person a, Person b){

		if(a.cabin > b.cabin){
			return 1;
		}else if(a.cabin < b.cabin){
			return -1;
		}else{

			if(a.end < b.end){
				return -1;
			}else if (a.end > b.end){
				return 1;
			}else{
				return 0;
			}
		}
	}

}
 

public static void main(String []args) throws IOException{

Main a = new Main();
BufferedReader io = new BufferedReader(new InputStreamReader(System.in));

int n = 0, k = 0, p = 0;
Main.Person []arr;
long count = 1;
int numLines = 0;
long cabin = 0;
long time = 0;
String []temp;

numLines = Integer.parseInt(io.readLine());


for(int i = 0; i < numLines; i++){
	
	temp = io.readLine().split(" ");
	n = Integer.parseInt(temp[0]);
	k = Integer.parseInt(temp[1]);
	//io.readInt();
	
	 if (n == 0) {
                System.out.println("0");
                continue;
            }	

	// makes matrix size n for n customers
	arr = new Person[n];

	for(int j = 0; j < n; j++){
		
		temp = io.readLine().split(" ");
		arr[j] = a.new Person(Integer.parseInt(temp[0]), Integer.parseInt(temp[1]), Integer.parseInt(temp[2]));
		
	}	

	Arrays.sort(arr, a.new PersonComparator());

	time = arr[0].end;
	cabin = arr[0].cabin;
	
	for(p = 1; p < arr.length; p++){
		if(arr[p].cabin == cabin && time <= arr[p].start ){
				count++;
				time = arr[p].end;
		}

		if (arr[p].cabin != cabin){
			time = arr[p].end;
			cabin = arr[p].cabin;
			count++;
		}

	}

	System.out.println(count);

	count = 1;
}// for

	
} // main

} // class
