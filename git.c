#include <stdio.h>

int main() {
	int num[]={29 ,8, 11, 15,7 };
	//number of elements in the array
	int n=5; 
	int i,j;
	
	for ( i=0; i<n-1; i++ ) {
		for( j=0; j<n-1-i; j++){
			if (num[j]> num[j + 1 ]){
				//swap num [j] and num [j+1]				
				int temp = num[j];
				num[j]= num[j + 1 ];
				num[j + 1 ] = temp;
			}
		}
	}
	printf ("sorted array:");
	for ( i=0; i<n; i++){
		printf(" %d ", num[ i ]);
	}
	printf("\n");
	return 0;
}
