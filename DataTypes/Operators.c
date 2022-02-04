//Operators 
//1. unary Operator 
//	work on single operand
//
//2. binary operator
//	work on two operand
//
//3. Ternary operator
//	work on three and more then three operands

//1. Arithmetic Operato
//	1. +
//	2. -
//	3. *
//	4. /
//	5. %

#include<stdio.h>
main()
{
	a=10 + 20 * 2 - 30;
	printf("%d",a);	
}	

2. Relational Operators
	1. >
	2. >=
	3. <
	4. <=
				
	false -- 0
	true -- 1
	
	
	#include<stdio.h>
	main()
	{
		printf("%d", 10>20);
	}
	//0
	
	#include<stdio.h>
	main()
	{
		printf("%d", 10<20);
	}
	// 1
	
	
	
	#include<stdio.h>
	main()
	{
		printf("%d", 10<=10);
	}
	//1
	
	#include<stdio.h>
	main()
	{
		printf("%d", 10>=10);
	}
	//1
	

//Equality Operator
//	1. ==  --> Ex: a==b  if both value are same then its true
//	2. != --> Ex: a!=b true, if both value are not same

	#include<stdio.h>
	main()
	{
		printf("%d", 10==10);
	}
	//1
	
	
	#include<stdio.h>
	main()
	{
		printf("%d", 10==11);
	}
	//0
	
	
	#include<stdio.h>
	main()
	{
		printf("%d", 10!=11);
	}
	//1
	
	
3. Logical Operator
	1. && 
	2. ||
	3. !
	
	1. a && b 
		
		a  |  b | a&&b
		1	  1     1	
		1     0     0
		0     -     0
			
	ex: 
	#include<stdio.h>
	main()
	{
		int a =10;
		int b=20;
		int c = a && b;
		printf("a = %d \nb= %d\n c = %d",a,b,c);
	}
	//10 20 1

	
	#include<stdio.h>
	main()
	{
		int a =10;
		int b=20;
		int c = a++ && b++;
		printf("a = %d \nb= %d\n c = %d",a,b,c);
	}
//	11 , 21 , 1
	
	
	#include<stdio.h>
	main()
	{
		int a =10;
		int b=20;
		int c = a++ && 0;
		printf("a = %d \nb= %d\n c = %d",a,b,c);
	}
	//11 20 0
	
	
	#include<stdio.h>
	main()
	{
		int a =10;
		int b=20;
		int c = a<10 && b++;
		printf("a = %d \nb= %d\n c = %d",a,b,c);
	}
	//10 20 0
	
	
	2. || --> 
	
	a | b | a||b
	1	-	1
	0	1	1
	0	0	0

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	



