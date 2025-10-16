#include <stdio.h>
int main(){
int nnn;
int ans=1;
int a;
printf("Enter a number: ");
scanf("%d",&nnn);
for (int a=nnn;a>0;a--){
ans=a*ans;
}
printf("The factorial value is %d",ans);
}
