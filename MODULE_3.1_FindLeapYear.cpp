#include<stdio.h>
int main(){
	int year;
	printf("Give a year and i will find out if its a leap yearor not \n");
	scanf(" %d", &year);
	
	if(year % 2 == 0){
		printf("its  a leap year");
	}
	else{
		
		printf("its not  a leap year");
	}
	
};