#include <stdio.h>

/**
  * main - print sum of multiples of 3 or 5 below 1024
  * Return: 0
  */
int main(void)
{
int sum = 0;
for(int i = 3; i < 1024; i++) 
{
if (i%3==0 || i%5==0)
sum += i;
}
printf("%d",sum);
return 0;
}