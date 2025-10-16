#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main(){
	int sum=0;
	int nnn,i,j,prime;
	int pcount=0;
	printf("Enter a number: ");
	scanf("%d",&nnn);
	for (int i=2;i<=nnn;i++){
		prime=1;
		for (int j=2;j<=i/2;j++){
			if (i%j==0){
			prime=0;
			break;}
		}
	if (prime==1){
		pcount++;
		printf("%d\n",i);
		sum+=i;}
}
	
	printf("Sum is %d\n",sum);
	printf("%d prime numbers in total",pcount);
	
}


