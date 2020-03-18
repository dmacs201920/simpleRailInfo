#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
void splitdate(char*date,int *y,int *m,int *d);
void revjulian(int j,int y,int *d,int *m);
int isleap(int year);
void diffYMD (char *date1,char *date2,int *y,int *m,int *d);
int diffDays(char *date1,char *date2);
int cmpDate(char *date1,char *date2);
int isvalid(char *date);
int julian(int d,int m,int y);
///////////////////////////////////////////////////////////////////
void splitdate(char*date,int *y,int *m,int *d)
{
    date[2]=date[5]='\0';
    *d=atoi(date);
    *m=atoi(date+3);
    *y=atoi(date+6);
    date[2]=date[5]='/';
}
//////////////////////////////////////////////////////////////////////
int isleap(int year)
{
    if(year%100!=0&&year%4==0||year%400==0)
	return 1;
    else 
	return 0;
}
///////////////////////////////////////////////////////////
void diffYMD (char *date1,char *date2,int *y,int *m,int *d)
{
    int d1,m1,y1,d2,m2,y2;
    splitdate(date1,&y1,&m1,&d1);
    splitdate(date2,&y2,&m2,&d2);
    if(d2<d1)
    {
	if(m2==3)
	{
	    if(isleap(y2))
		d2=d2+29;
	    else
		d2=d2+28;
	}
	else if (m2==5||m2==7||m2==10||m2==12)
	    d2=d2+30;
	else
	    d2=d2+31;
	m2=m2-1;
    }
    if(m2<m1)
    {
	y2=y2-1;
	m2=m2+12;
    }
    *y=y2-y1;
    *m=m2-m1;
    *d=d2-d1;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int diffDays(char *date1,char *date2)
{
    int d1,d2,m1,m2,y1,y2,j1,j2;
    int y,d,i,days;
    d=0;
    splitdate(date1,&y1,&m1,&d1);
    splitdate(date2,&y2,&m2,&d2);
    j1=julian(d1,m1,y1);
    j2=julian(d2,m2,y2);
    if(y1==y2);
    return j2-j1;
    for(i=y1+1;i<=y2-1;i++)
    {
	if(isleap(i))
	    d=d+366;
	else
	    d=d+365;
    }
	if(isleap(y1))
	    days=(366-j1)+d+j2;
	else
	days=(365-j1)+d+j2;
    return days;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
int cmpDate(char *date1,char *date2)
{
    int d1,d2,m1,m2,y1,y2;
    splitdate(date1,&y1,&m1,&d1);
    splitdate(date2,&y2,&m2,&d2);
if(y1<y2)
    return 1;
if(y1>y2)
    return -1;
if(m1<m2)
    return 1;
if(m1>m2)
    return -1;
if(d1<d2)
    return 1;
if(d1>d2)
    return -1;
return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int isvalid(char *date)
{
    int d,m,y;
    if (date[2]!='/'||date[5]!='/'||strlen(date)!=10)
	return 0;
    splitdate(date,&y,&m,&d);
    if(d==0||m==0||y==0)
	return 0;
    if(d<1||d>31||m<1||m>12)
	return 0;
    if(m==2)
    {
	if(d==30||d==31||(d==29&&!isleap(y)))
	    return 0;
    }
    else if(m==4||m==6||m==9||m==11)
    {
	if(d==31)
	    return 0;
    }
    return 1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int julian(int d,int m,int y)
{
    int j=d;
    switch(m-1)
    {
	case 11: j+=30;
	case 10: j+=31;
	case 9: j+=30;
	case 8: j+=31;
	case 7: j+=31;
	case 6: j+=30;
	case 5: j+=31;
	case 4: j+=30;
	case 3: j+=31;
	case 2: j+=28;
	case 1: j+=30;
    }
    if(isleap(y)&&m>2)
	j=j+1;
    return j;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void revjulian(int j,int y,int *d,int *m)
{
    int i;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(isleap(y))
	month[2]=29;
    for(i=1;i<=12;i++)
    {
	if(j<=month[i])
	    break;
	j=j-month[i];
    }
    *d=j;
    *m=i;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int date()

{
    char date[11],date1[11],date2[11];
    char dayweek[10],newdate[11];
    int iyear,imonth,dmonths,days;
    int y,m,d;
    printf("enter todays date(dd/mm/yy): ");
    scanf("%s",date1);
    printf("enter date of journey (dd/mm/yy): ");
    scanf("%s",date2);
    if(!isvalid(date1)||!isvalid(date2))
    {
	printf("enter only valid dates\n");
    }
    if(cmpDate(date1,date2)==1)
	days=diffDays(date1,date2);
    else
	days=diffDays(date2,date1);
    //  printf("difference in days= %d\n",days);
    // printf("difference of two dates is = ");
    //printf("%d years %d months %d days\n",y,m,d);
    scanf("difference in days= %d\n",&days);
    if (days>120)
    {
	printf("no reservation being done\n");
	exit(-1);
	
    }
    else
    {
	printf("you can continue\n");
    }
    return 0;
}
