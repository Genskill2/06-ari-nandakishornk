#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>



string ari(string s)
{
	float c=0.0,w=1.0,st=0.0;
	for(int i=0;i<strlen(s);i++)
	{
		if(isalnum(s[i])==1)
			c=c+1;
		if(s[i]==' ')
			w=w+1;
		if((s[i] == '.' && s[i+1] == '\0') || (s[i] == '.' && s[i+1] == ' ') || s[i] == '!' || s[i] == '?')
			st=st+1;
	}
	float r1=ceil((4.71*(c/w))+(0.5*(w/st))-21.43);
	int r=(int)r1;
	if(r==1)
		return "Kindergarten";
	else if(r==2)
		return "First/Second Grade";
	else if(r==3)
		return "Third Grade";
	else if(r==4)
		return "Fourth Grade";
	else if(r==5)
		return "Fifth Grade";
	else if(r==6)
		return "Sixth Grade";
	else if(r==7)
		return "Seventh Grade";
	else if(r==8)
		return "Eighth Grade";
	else if(r==9)
		return "Ninth Grade";
	else if(r==10)
		return "Tenth Grade";
	else if(r==11)
		return "Eleventh Grade";
	else if(r==12)
		return "Twelfth grade";
	else if(r==13)
		return "College student";
	else
		return "Professor";
}
