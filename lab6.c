//Write a program which will accept three integer numbers from user and find out greatest
among them using conditional operator.

#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the value of 3 number");
 scanf("%d%d%d",&a,&b,&c);
 
 if(a>b && a>c){
 printf("%d is the greatest number among three",a);
 
 if(c>b && c>a){
 printf("%d is the greatest number among three",c);
 
 if(b>a && b>c){
 printf("%d is the greatest number among three",b);
 
 return 0;
 }
 
 
