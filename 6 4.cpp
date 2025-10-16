#include <stdio.h>
int main() { 

    int nnn; 

    int a = 0, b = 1, sum = 0, next; 

    printf("Enter a number: "); 

    scanf("%d", &nnn); 

    for (int i = 1; i <= nnn; i++) { 

        printf("%d ", a);  

        sum += a;  

        next = a + b;  

        a = b; 

        b = next; 
    } 
    printf("\nSum is %d\n", sum); 

} 

 
