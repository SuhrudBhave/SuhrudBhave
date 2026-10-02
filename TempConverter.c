#include <stdio.h>
#include <string.h>
int main(){
    
   char choice = '\0';
   float farheneit = 0.0f;
   float celsius = 0.0f;

   printf("Temp conversion program\n");
   printf("Press F to convert F to C\n");
   printf("Press C to convert C to F\n");
   printf("Is the temp in C or F: ");
   scanf("%c", &choice);
   if(choice == 'c'){
    printf("enter the temp in celsius: ");
    scanf("%f", &celsius);
    farheneit = (9.0f / 5.0f * celsius) + 32;
    printf("%.2f celsius is %.2f farheneit", celsius, farheneit);
   }
   else if(choice == 'f'){
printf("enter the temp in farheneit: ");
scanf("%f", &farheneit);
celsius = 5.0f / 9.0f * (farheneit - 32);
printf("%.2f farheneit is %.2f celsius", farheneit, celsius);
   }
   else{
    printf("invalild temp unit\n");
   }

   getchar();
   getchar();

   return 0;

}