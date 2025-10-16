#include <stdio.h>
int main(){
	int balance=5000;
	int amount,dcount,wcount;
	do{
		printf("Enter transaction amount: ");
		scanf("%d",&amount);
		balance=balance+amount;
		printf("Updated Balance: %d\n",balance);
		if (amount>0){
			dcount=dcount+1;
		} else{
			wcount=wcount+1;
		}
}while (amount!=0);
printf("The final balance is %d\n",balance);
printf("%d withdrawals\n%d deposits",wcount,dcount);
}
