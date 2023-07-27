#include<stdio.h>
int main(){
	int Days , Year;
	char Ans;
	printf("If you want Days To Year Type D \n");
	printf("If you want Year To days Type Y \n");
	scanf(" %c", &Ans);
	
	if (Ans == 'D'){
		printf("1 Year = 365 Days \n");
		printf("Give days \n");
		scanf(" %d" , &Days);
		printf("%d", Days * 1 / 365);
		
	}else if(Ans == 'Y'){
		printf("365 Days = 1 Year \n");
		printf("Give Year's' \n");
		scanf(" %d" , &Year);
		printf("%d", Year * 365 / 1);
	}else{
		printf("You Just Dumb");
	}
	
}