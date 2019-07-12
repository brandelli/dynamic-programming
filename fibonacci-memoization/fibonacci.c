#include<stdlib.h>
#include<stdio.h>
#define size 100
int fibonacci(int val, int *arr){
	if(val < 2){
		arr[val] = val;
		return val;
	}
	
	if(arr[val] == 0){
		arr[val] = fibonacci(val - 1, arr) + fibonacci(val - 2, arr);
	}

	return arr[val];
}

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: ./fib number \n");
		return -1;
	}
	int val = atoi(argv[1]);
	int arr[size] = {};
	int fib = fibonacci(val, arr);
	printf("Fibonacci of %d: %d \n", val, fib);
}
