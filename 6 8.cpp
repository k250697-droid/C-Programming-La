#include <stdio.h>
int main(){
	int num1;
	int num2;
	int large;
	char ans;
	int small;
	printf("enter a number: ");
	scanf("%d",&num1);
	large=small=num1;
	do{
	printf("enter a number: ");
	scanf("%d",&num2);
	if (num2>large){
		large=num2;}
		else if (num2<small){
			small=num2;
		}
	    printf("Do you want to continue? (Y/N): ");
	    scanf(" %c",&ans);
    }while (ans=='Y' || ans=='y');
    printf("The largest number entered: %d\n",large);
    printf ("The smallest number entered: %d",small);
}
