#include <stdio.h>
//this is a comment

int fib(int n){
	if(n<2)
		return n;
	return fib(n-1)+fib(n-2);
}

int main(){
	int j;
	scanf(" %d",&j);
	printf("%d \n", fib(j));
}


