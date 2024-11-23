#include<stdio.h>
#include<conio.h>

int addition(value1,value2)
{
	return value1+value2;
}
int substraction(value1,value2)
{
	return value1-value2;
}
int multiplication(value1,value2)
{
	return value1*value2;
}
int division(value1,value2)
{
	return value1/value2;
}
void main()
{
	int num1 ,num2,ans;
	char choice;
	start:
	
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	
	printf("\nenter your choice:");
	scanf(" %c",&choice);
	
	switch (choice)
{
		
	case'+':
	ans=addition(num1,num2);
	printf("addition is %d",ans);
	break;
	
	case'-':
	ans=substraction(num1,num2);
	printf("substraction is %d",ans);
	break;
	
	case'*':
	ans=multiplication(num1,num2);
	printf(" multiplication is %d",ans);
	break;
	
	case'/':
	ans=division(num1,num2);
	printf("division is %d",ans);
	break;
	
	default:printf("enter valid choice:");
	goto start;
}
}