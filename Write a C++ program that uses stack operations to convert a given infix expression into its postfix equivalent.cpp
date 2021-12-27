#include<stdio.h>
#include<stdlib.h>     
#include<ctype.h>    
#include<string.h>

#define SIZE 100
char stack[SIZE];
int top = -1;

void push(char item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}
char pop()
{
	char item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix value");
		getchar();
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}
int is_operator(char sym)
{
	if(sym == '^' || sym == '*' || sym == '/' || sym == '+' || sym =='-')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
int precedence(char sym)
{
	if(sym == '^')
	{
		return(3);
	}
	else if(sym == '*' || sym == '/')
	{
		return(2);
	}
	else if(sym == '+' || sym == '-')         
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void InfixToPostfix(char infix_value[], char postfix_value[])
{ 
	int i, j;
	char item;
	char x;

	push('(');                               
	strcat infix_value,")");                 

	i=0;
	j=0;
	item infix_value[i];        

	while(item != '\0')        
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix_value[j] = item;             
			j++;
		}
		else if(is_operator(item) == 1)      
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix_value[j] = x;                 
				j++;
				x = pop();                     
			}
			push(x);
		
			push(item);                 
		}
		else if(item == ')')        
		{
			x = pop();                  
			while(x != '(')              
			{
				postfix_value[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{
			printf("\nInvalid infix Expression.\n");       
			getchar();
			exit(1);
		}
		i++;


		item = infix_value[i];
	} 
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");      
		getchar();
		exit(1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");       
		getchar();
		exit(1);
	}


	postfix_value[j] = '\0'; 
}
int main()
{
	char infix[SIZE], postfix[SIZE];       
	printf("WARNING:THE INFIX MUST CONTAIN SINGLE LETTER VARIABLES AND SINGLE DIGIT CONSTANTS ONLY.\n");
	printf("\nEnter Infix value : ");
	gets(infix);

	InfixToPostfix(infix,postfix);                   
	printf("Postfix value: ");
	puts(postfix);                     

	return 0;
}
