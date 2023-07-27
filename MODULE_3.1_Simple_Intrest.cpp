# include<stdio.h>
int main(){
	int Anulle_Amount;
	float Yearly_amount,Monthly_amount,Daily_amount,Anulle_Intrest;
	char Percenteg = '%';
	printf("\n");
	printf("---------------------\n");
	printf("\n");
	printf("Find Simple Intrest \n");
	printf("\n");
	printf("---------------------\n");
	printf("\n");
	
	printf("Type Anulle Amount \n");
	scanf("%d", &Anulle_Amount);
	
	printf("Thnks For Entering Anulle Amount \nNow Enter Anulle Intrest (Do Not Add '%c' ) \n", Percenteg);
	scanf("%f", &Anulle_Intrest);
	
	Yearly_amount = Anulle_Amount *  Anulle_Intrest / 100;
	Monthly_amount = Anulle_Amount *  Anulle_Intrest / 100   / 12 ;
	Daily_amount = Anulle_Amount *  Anulle_Intrest / 100   / 12 / 33;
	
	printf("Yearly your amount will increes by = %f \n",  Yearly_amount ) ;
	printf("Monthly ( 33 days in a Month ) your amount will increes by = %f \n", Monthly_amount) ;
	printf("Daily your amount will increes by = %f \n",  Daily_amount) ;
}