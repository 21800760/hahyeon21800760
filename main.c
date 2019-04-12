#include <stdio.h>

void f1();
void f2();
void f3();
void f4();

int main(){

	f1();
	f2();
	f3();
	f4();

	return 0;	
}

void f2(){
	int a=10;
	int b=5;
	
	printf("The result is %d \n",a-b);
}
