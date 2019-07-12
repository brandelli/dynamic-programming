#include<stdlib.h>
#include<stdio.h>
int fibonacci(int val){
	if(val < 2){
		return val;
	}
	int prev, cur, new;
	prev = 0;
	cur = 1;
	for(int i=0;i<val-1;i++){
		new = prev+cur;
		prev = cur;
		cur = new;
	}
	return cur;
}

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: ./fib number \n");
		return -1;
	}
	int val = atoi(argv[1]);
	int fib = fibonacci(val);
	printf("Fibonacci of %d: %d \n", val, fib);
}
