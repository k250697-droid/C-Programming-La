#include <stdio.h>
int main(){
	int count1,count2,count3;
	int avg,sum;
	int grade;
	printf("Enter your grade: ");
	do{
		scanf("%d",&grade);
		sum=sum+grade;
		if (grade>70){
		count1=count1+1;
		avg=sum/count1;
	}
	if (grade>=50 && grade<=70){
		count2=count2+1;
		avg=sum/count2;
	}else{
		count3=count3+1;
		avg=sum/count3;
	}
	}while (grade!=-1);
	
	printf("Average grade is %d\nGrades above 70: %d\nGrades between 50 and 70: %d\nGrades below 50: %d",avg,count1,count2,count3);
}
	
