# include <stdio.h>
int main(){
	char Math;
	int Number_A, Number_B;
	
	
	printf("Add first Number \n");
	scanf("%d", &Number_A);
	printf("Add second Number \n");
	scanf("%d", &Number_B);
	
	printf("now give One Math Opretor in which you want to calculat Both Number \n");
	scanf(" %c", &Math);
	
	switch(Math){
		case '+':{
			printf("%d", Number_A + Number_B);
			break;
		}
		case '-':{
				printf("%d", Number_A - Number_B);
			break;
		}
		case '/':{
				printf("%d", Number_A / Number_B);
			break;
		}
		case '*':{
				printf("%d", Number_A * Number_B);
			break;
		}
		case '%':{
				printf("%d", Number_A % Number_B);
			break;
		}
		default:{
				printf("%d", Number_A + Number_B);
				printf("%d", Number_A - Number_B);
				printf("%d", Number_A / Number_B);
				printf("%d", Number_A * Number_B);
				printf("%d", Number_A % Number_B);
			break;
		}
	}
	
}