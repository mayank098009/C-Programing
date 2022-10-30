#include<stdio.h>
int main()
{
float Basic_salary;
float dearness_allowance;
float  House_rent;
float Gross_salary;

printf("Enter the Basic_salary");
scanf("%f",&Basic_salary);
 
 dearness_allowance = 0.5*Basic_salary;
 House_rent = 0.2*Basic_salary;
 
 Gross_salary = Basic_salary+dearness_allowance+House_rent;
  printf("Basic_salary: %f\n",&Basic_salary);
  printf("dearness_allowance: %f\n",&dearness_allowance);
  printf("House_rent: %f\n",&House_rent);
  printf("Gross_salary: %f\n",&Gross_salary);
  
  
 return 0

