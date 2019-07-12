#include<stdlib.h>
#include<stdio.h>
#define MAX 100

int arr[MAX] = {-1};

int sum(int val){
	if(val < 0){
		return 0;
	}

	if(val == 0){
		return 1;
	}

	if(arr[val] != -1){
		return arr[val];
	}

	arr[val] = sum(val - 1) + sum(val - 3) + sum(val - 5);

	return arr[val];
}

void fillArray(int *arr, int size){
	while(--size){
		arr[size] = -1;
	}
}

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: ./sum number \n");
		return -1;
	}
	int val = atoi(argv[1]);
	fillArray(arr, MAX);
	int result = sum(val);
	printf("Number of combinations to reach %d: %d\n", val, result);
}
