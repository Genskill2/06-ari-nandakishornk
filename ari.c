#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>



string ari(string s)
{
	float c=0.0,w=1.0,st=0.0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(isalnum(s[i])==1)
			c=c+1;
		if(s[i]==' ')
			w=w+1;
		if((s[i] == '.' && s[i+1] == '\0') || (s[i] == '.' && s[i+1] == ' ') || s[i] == '!' || s[i] == '?')
			st=st+1;
	}
	float r=4.71*(c/w)+0.5*(w/st)-21.43;
	if(r<=1.0)
		return "Kindergarten";
	else if(r<=2.0)
		return "First/Second Grade";
	else if(r<=3.0)
		return "Third Grade";
	else if(r<=4.0)
		return "Fourth Grade";
	else if(r<=5.0)
		return "Fifth Grade";
	else if(r<=6.0)
		return "Sixth Grade";
	else if(r<=7.0)
		return "Seventh Grade";
	else if(r<=8.0)
		return "Eighth Grade";
	else if(r<=9.0)
		return "Ninth Grade";
	else if(r<=10.0)
		return "Tenth Grade";
	else if(r<=11.0)
		return "Eleventh Grade";
	else if(r<=12.0)
		return "Twelfth grade";
	else if(r<=13.0)
		return "College student";
	else
		return "Professor";
}
