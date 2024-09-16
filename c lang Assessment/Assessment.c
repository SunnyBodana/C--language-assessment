#include <stdio.h>
#include <string.h>

void lengthfunc(char str1[]);
void copyfunc(char str1[],char str2[]);
void concatfunc(char str1[],char str2[]);
void reversefunc(char str[]);
void vowelconsonantfunc(char str1[]);
void palindromefunc(char str1[],char rev[]);
void frequencyofstrfunc(char str1[]);
void blackspaceanddigitfunc(char str1[]);



int main()
{
	int choice;
	char strname[100],ans;
	start:
	
	printf("\n Main Menu:");
	printf("\n\n\t 1. length of string");
	printf("\n\t 2. String Copy");
	printf("\n\t 3. Concat");
	printf("\n\t 4. Find number of vowels and consonants");
	printf("\n\t 5. Reverse");
	printf("\n\t 6. Palindrome ");
	printf("\n\t 7. Frequency of character in string");
	printf("\n\t 8. Find number of black spaces and digits.");
	
	printf("\n\nPlease Enter your choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	
		
		{
			char str1[100];
			printf("\nEnter the string:");
			scanf("%s",str1);
			
			lengthfunc(str1);
		}
		
			break;
			
		case 2:
			
		{
			char str1[100],str2[100];
			printf("\nEnter the first string :");
			scanf("%s",str1);
	
			printf("\nEnter the second string :");
			scanf("%s",str2);
			
			copyfunc(str1,str2);
		}
			
			break;
			
		case 3:
			
		{
			char str1[100],str2[100];
			printf("\nEnter the first string :");
			scanf("%s",str1);
	
			printf("\nEnter the second string :");
			scanf("%s",str2);
			
			concatfunc(str1,str2);
		}	
			
			break;
			
		case 4:
		{
			char str1[100];
			printf("\nEnter the  string :");
			scanf("%s",str1);	
			
			vowelconsonantfunc(str1);
		}
			break;
			
		case 5:
		{
			char str1[100];
			printf("\nEnter the string :");
			scanf("%s",str1);	
			
			reversefunc(str1);
		}
			break;
			
		case 6:
			
		{
			char str1[100],copy[100];
			printf("\nEnter the string :");
			scanf("%s",str1);
			
			palindromefunc(str1,copy);
			
		}
			
			break;
			
		case 7:
		{
			char str1[100];
			printf("\nEnter the string :");
			scanf("%s",str1);
			
			frequencyofstrfunc(str1);
		}	
		
			break;
			
		case 8:
			
		{
			char str1[100];
			printf("\nEnter the string :");
			scanf("%s",str1);
			
			blackspaceanddigitfunc(str1);
		}	
			
			break;
			
		default :
			
			printf("\nInvalid Choice:");
	}
	
	printf("\n\n If you want to continue, press 'Y' To exit (no), print 'N':- ");
	scanf(" %c", &ans);
	
	if(ans == 'y' || ans == 'Y')
	{
		goto start;
	}
	else
	{
		goto end;
	}
	
	end:
		
	printf("\n\n--------------------END---------------------------------");
	return 0;
}

void vowelconsonantfunc(char str1[])
{
	int countvowel = 0 ,countconsonant =0 ,i;
	for(i=0 ; str1[i] != '\0' ; i++)
	{
		if(str1[i] == 'A' || str1[i] =='E' || str1[i] =='I' ||str1[i] == 'O' || str1[i] =='U' ||str1[i] == 'a' || 
		    str1[i] =='e' ||str1[i] == 'i' ||str1[i] == 'o' ||str1[i] == 'u' )
		{
			countvowel++;
		}
		else 
		{
			if((str1[i]>='a'&& str1[i]<='z') || (str1[i]>='A'&& str1[i]<='Z') )
			countconsonant++;
		}
	}
	printf("\n\nThe number of vowel character is %d",countvowel);
	printf("\n\nThe number of consonant character is %d",countconsonant);

}

void lengthfunc(char str1[])
{
	int length = 0;
	
	while(str1[length] != '\0')
	{
		length++;
	}
	
	printf("\n Length of string is %d ",length);
	
}

void copyfunc(char str1[],char str2[])
{
	
	printf("\n Normal string:- \n\n str1= %s \n str2 = %s ",str1,str2);
	
	int i;
	
	for (i=0; str2[i]!='\0';i++){
		str1[i]=str2[i];
	}
	str1[i]= '\0';
		
	printf("\n Copied string:- \n\n str1= %s \n str2 = %s ", str1,str2);
	
}

void concatfunc(char str1[],char str2[])
{
	
	printf("\n Normal string:- \n\n str1= %s \n str2 = %s",str1,str2);
	
	int i=0,j=0;
	char st3[100];
	for(i=0; str1[i] != '\0'; i++)
	{
		st3[j] = str1[i];
		j++;
	}
	for(i=0; str2[i] != '\0'; i++)
	{
		st3[j] = str2[i];
		j++;
	}
	st3[j] = '\0';
	printf("\nCombined string:- %s",st3);	
	
}

void palindromefunc(char str1[],char rev[])
{
	int count=0,i,length=0;
	rev[100] ;
	
	for(i=0 ; str1[i]!='\0' ; i++)
	{
		length++;
	}
	int temp = length;
	
	for(i=0 ; str1[i] != '\0' ; i++)
	{
		rev[i]=str1[length-1];
		length--;
	}
	
	printf("\n Reversed string =");
	
	for(i=0 ; i<temp ; i++)
	{
		printf("%c",rev[i]);
	}
	
	
	for(i=0 ; str1[i] != '\0' ; i++)
	{
		if(str1[i] != rev[i])
		{
			count++;
		}
	}
	
	if(count == 0)
	{
		printf("\n string is Pallindome");
	}
	else
	{
		printf("\n string is not pallindrome");
	}
}


void reversefunc(char str[])
{
	char rev[100];
	int length = 0,i;
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	int temp = length;
	for(i=0;str[i]!='\0';i++)
	{
		rev[i] = str[length-1];
		length--;
	}
	printf("\nReversed string = ");
	for(i=0;i<temp;i++)
	{
		printf("%c",rev[i]);
	}
}

void frequencyofstrfunc(char str1[])
{
	char ch;
	int count=0,i;
	for(ch='a';ch<='z';ch++)
	{
		count=0;
		for(i=0;str1[i]!='\0';i++)
		{
			if(ch==str1[i])
			{
				count++;
			}
		}
		if(count>0)
		{
			printf("\n %c Found in  %d Times",ch,count);
		}
	}
}

void blackspaceanddigitfunc(char str1[])
{
	int i,count=0;
		for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' ')
		{
			count++;
		}
	}
	printf("\nTotal numbre of space = %d",count);
}



