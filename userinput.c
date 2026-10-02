#include <stdio.h>
#include <string.h>
int main() {

    int age = 0;
float percentage = 0.0f;
char name[30] = "";
    printf("Enter your age: ");
    scanf("%d", &age);
    
    
    printf("Enter your CET percentile: ");
    scanf("%f", &percentage);
    
getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\n%s\n", name);
    printf("You are %d years old.\n", age);
    printf("Your CET percentile is %.2f and you got WCE college\n", percentage);

    return 0;
}