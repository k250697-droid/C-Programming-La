#include <stdio.h>
int main(){
	int num;
	int ans;
	int i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for (i=1;i<=10;i++){
		ans=num*i;
	printf("%d x %d= %d\n",num,i,ans);
}
}
