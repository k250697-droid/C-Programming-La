#include <stdio.h>
int main(){
	int sum;
	int num;
	char ans;
	printf("Enter a number: ");
	scanf("%d",&sum);
do{
	printf("Enter the next number: ");
	scanf("%d",&num);
	sum=sum+num;
	printf("Running Total= %d\n",sum);
	printf("Do you want to enter another number? (Y/N): ");
	scanf(" %c",&ans);
}while (ans=='Y' || ans=='y');
printf("Total sum: %d",sum);
	
}
