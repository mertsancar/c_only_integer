#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void addition(int int_1 ,int fractional_1, int len1,int int_2, int fractional_2 ,int len2)
{ 
		int a1,a2,b1,b2,result;
		int temp,len_result=0,i;
		
		
		a1=pow(10,len1);
		b1=(int_1*a1)+fractional_1;	
		
		a2=pow(10,len2);
		b2=(int_2*a2)+fractional_2;
		
		result=((b1*a2)+(b2*a1));
		
				
		temp=result;
		while(result!=0)
		{
			result=result/10;
			len_result++;
		}
		result=temp;
		int digit_result[len_result];
		
		temp=result;
			for(i=len_result-1;i>=0;i--)
			{
				digit_result[i]=result%10;
				result=result/10;
			}
		result=temp;
		
		if(len_result<len1+len2)
		{
			int zeros=(len1+len2)-len_result;		
			printf("0.");	
			for(i=0;i<zeros;i++)
			{
				printf("0");	
			}	
			for(i=0;i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
			
		}
		

		else if(len_result>len1+len2)
		{
			for(i=0;i<len_result-(len1+len2);i++)
			{
				printf("%d",digit_result[i]);
			}
			printf(".");
			for(i=len_result-(len1+len2);i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
		}
		
		else if(len_result==len1+len2)
		{
			printf("0.");
			for(i=len_result-(len1+len2);i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
		}	
			
			
	
		


}

void subtraction(int int_1, int fractional_1,int len1,int int_2, int fractional_2,int len2)
{
		int a1,a2,b1,b2,result;
		int temp,len_result=0,i;
		
		
		a1=pow(10,len1);
		b1=(int_1*a1)+fractional_1;	
		
		a2=pow(10,len2);
		b2=(int_2*a2)+fractional_2;
		
		if((b1*a2)>(b2*a1))
		{
			result=((b1*a2)-(b2*a1));
		}
		else if((b2*a1)>(b1*a2))
		{
			result=((b2*a1)-(b1*a2));
		}
		else
		{
			result=0;
		}
		
		
		temp=result;
		while(result!=0)
		{
			result=result/10;
			len_result++;
		}
		result=temp;
		int digit_result[len_result];
		
		temp=result;
			for(i=len_result-1;i>=0;i--)
			{
				digit_result[i]=result%10;
				result=result/10;
			}
		result=temp;
		
		if(len_result<len1+len2)
		{
			int zeros=(len1+len2)-len_result;		
			printf("0.");	
			for(i=0;i<zeros;i++)
			{
				printf("0");	
			}	
			for(i=0;i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
			
		}
		

		else if(len_result>len1+len2)
		{
			for(i=0;i<len_result-(len1+len2);i++)
			{
				printf("%d",digit_result[i]);
			}
			printf(".");
			for(i=len_result-(len1+len2);i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
		}
		
		else if(len_result==len1+len2)
		{
			printf("0.");
			for(i=len_result-(len1+len2);i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
		}
		
}

void multiplication(int int_1, int fractional_1,int len1,int int_2, int fractional_2,int len2)
{
	int a1,a2,b1,b2,result;
		int temp,len_result=0,i;
		
		
		a1=pow(10,len1);
		b1=(int_1*a1)+fractional_1;	
		
		a2=pow(10,len2);
		b2=(int_2*a2)+fractional_2;
		
		
		result=(b1*b2);
		
		
		
		temp=result;
		while(result!=0)
		{
			result=result/10;
			len_result++;
		}
		result=temp;
		int digit_result[len_result];
		
		temp=result;
			for(i=len_result-1;i>=0;i--)
			{
				digit_result[i]=result%10;
				result=result/10;
			}
		result=temp;
		
		if(len_result<len1+len2)
		{
			int zeros=(len1+len2)-len_result;		
			printf("0.");	
			for(i=0;i<zeros;i++)
			{
				printf("0");	
			}	
			for(i=0;i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
			
		}
		

		else if(len_result>len1+len2)
		{
			for(i=0;i<len_result-(len1+len2);i++)
			{
				printf("%d",digit_result[i]);
			}
			printf(".");
			for(i=len_result-(len1+len2);i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
		}
		
		else if(len_result==len1+len2)
		{
			printf("0.");
			for(i=len_result-(len1+len2);i<len_result;i++)
			{
				printf("%d",digit_result[i]);
			}
		}
		
		
}


int main()
{
	char number1[100],number2[100];
	char *fract1,*fract2,*integer1,*integer2;
	int fract1_len,fract2_len;
	int integer_part1,integer_part2,fractional_part1,fractional_part2;
	int len1=0,len2=0;
	int temp;

	
	printf("Enter FIRST NUMBER:");
	scanf("%s",&number1);
	integer1= strtok(number1,".");
	fract1=strtok(NULL,".");
	fract1_len=strlen(fract1);
	
	len1=fract1_len;
	
	integer_part1=atoi(integer1);
	fractional_part1=atoi(fract1);
	
	
	
	printf("Enter SECOND NUMBER:");
	scanf("%s",&number2);
	integer2= strtok(number2,".");
	fract2=strtok(NULL,".");
	fract2_len=strlen(fract2);
	
	len2=fract2_len;
	
	integer_part2=atoi(integer2);
	fractional_part2=atoi(fract2);
	
	

			
	printf("\nAddition:");
	addition(integer_part1,fractional_part1,len1,integer_part2,fractional_part2,len2);
	
	printf("\nSubtraction:");
	subtraction(integer_part1,  fractional_part1,len1, integer_part2,  fractional_part2,len2);
	
	printf("\nMultiplication:");
	multiplication(integer_part1,  fractional_part1,len1, integer_part2,  fractional_part2,len2);
	
	
	
	
	return 0;
}
