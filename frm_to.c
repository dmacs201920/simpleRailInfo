#include<stdio.h>
#include<string.h>
#include"header.h"
#include<stdlib.h>
void from_to()
{
    FILE *f=fopen("sai.txt","r");
	FILE *f1=fopen("sai1.txt","r");
    char a[20],s[20],t[20],v[20],u[20],d[100];
    int i=0,j=0,k=0;
    printf("from:");
    scanf("%s",t);
   // fgets(t,20,stdin);
    //getchar();
    strcpy(v,t);
a:	fscanf(f,"%s",s);
	fscanf(f1,"%s",a);
	while(!feof(f)&&!feof(f1))
	{
	    if (strcmp(t,s)==0||strcmp(t,a)==0)
		break;
	    fscanf(f,"%s",s);
	    fscanf(f1,"%s",a);
	}
	if (k>0)
	{
	    if (!feof(f)||!feof(f1))
	    {
		if (k==2)
		    goto c;
		goto b;
	    }
	    else
	    {
		puts("route not found");
		fclose(f);
		fclose(f1);
		exit(0);
	    }
	}
	if(feof(f)||feof(f1))
	    j=1;
	++i;
	if (i==1)
	{
	    printf("to:");
	    scanf("%s",u);
//	    fgets(u,100,stdin);
//	    getchar();
	    strcpy(t,u);
	    rewind(f);
	    rewind(f1);
	    goto a;
	}
	if (j==1)
	    puts("invalid input");
	fclose(f);
	fclose(f1);
	k=1;
	f=fopen("z.txt","r");
	f1=fopen("z.txt","r");
	strcpy(t,v);
	goto a;
b:	strcpy(t,u);
	++k;
	rewind(f);
	rewind(f1);
	goto a;
c:    	puts("route found");
	fclose(f);
	fclose(f1);
	return;
}

