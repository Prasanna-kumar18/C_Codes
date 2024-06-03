 /*
 * Anagram.c
 *
 *  Created on: Jul 14, 2023
 *      Author: Prasanna Kumar
 */
#include <stdio.h>
#include <string.h>

int anagram(char str1[],char str2[])
{
	int char1[26] = {0};
	int char2[26] = {0};
	int flag=0;
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if(len1!=len2)
	{
		return 0;
	}

	for(int i=0; i<len1; i++)
	{
		if(str1[i]== str2[i])
		{
			flag++;
		}
	}
	if(flag==len1)
	{
		return 0;
	}

	for(int i=0 ; i<len1; i++)
	{
		char1[str1[i] - 'a']++;
	}

	for(int i=0 ; i<len2; i++)
	{
		char2[str2[i] - 'a']++;
	}

	for(int i=0; i<26; i++)
	{
		if(char1[i]!= char2[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char str1[30];
	char str2[30];

	printf("Enter the string 1\n");
	fflush(stdout);
	scanf("%s",str1);
	printf("Enter the string 2\n");
	fflush(stdout);
	scanf("%s",str2);

	if(anagram(str1,str2))
	{
		printf("The strings are anagram");
		fflush(stdout);
	}
	else
	{
		printf("The strings are not anagram");
		fflush(stdout);
	}
}




