#include<stdio.h>
// convert fahrenheit temperature to celcius equaivalent
int main(){
    int fahr, celcius;
    printf("Enter temperature in Fahr\n");
    scanf("%d", &fahr);
    // celcius = 5/9 * (fahr-32);
    // celcius = 5 * (fahr-32) / 9;
    celcius = 5.0/9 * (fahr-32);

    
    printf("Temperature in celcius is = %d\n", celcius);
    return 0;