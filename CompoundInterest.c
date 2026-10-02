#include <stdio.h>
#include <math.h>
int main(){

double principle = 0.0;
double rate = 0.0;
int years = 0;
int timesCompounded = 0;
double total = 0.0;

printf("Compound interest calculator\n");
printf("Enter your principle (p): ");
scanf("%lf", &principle);

printf("enter the interest rate(%): ");
scanf("%lf", &rate);
rate = rate / 100;

printf("Enter no of years: ");
scanf("%d", &years);
    
printf("no. of times compunded: ");
scanf("%d", &timesCompounded);

total = principle * pow(1 + rate / timesCompounded, timesCompounded * years);
printf("%lf", total);


    
    
    
    
    return 0;

}