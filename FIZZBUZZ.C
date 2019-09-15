/*Write a program that outputs the string representation
 of numbers from 1 to n.

But for multiples of three
 it should output “Fizz” instead of the number
 and for the multiples of five output “Buzz”.
 For numbers which are multiples of both three and five output “FizzBuzz”.*/



#include<conio.h>
#include<stdio.h>

void main()
{
int a[100],i,n;
clrscr();

printf("enter number of elements\n" );
scanf("%d", &n);

printf(" elements are\n\n",n);
while(i<n)
{
scanf("%d",&a[i]);
i++;
}

for(i=0;i<=n;i++)
{
if(i%3==0)
{
printf("fizz\n");
}
else if(i%5==0)
{
printf("buzz\n");
}
else if(i%5==0 && i%3==0)
{
printf("buzzfizz\n");
}
else
{
printf("%d\n",i);
}
}
getch();
}

