#include<stdio.h>
#include<stdlib.h>

long   sget()
{
    long  c=1,d=1;
 //   char a[5];
    	//   printf("entet two numbers");
    FILE *f=fopen("coach_index.txt","r");
    FILE *f1=fopen("seat_index.txt","r");
    long  *c_ptr=&c; long  *d_ptr=&d;
    fscanf(f,"%li",&c);
    rewind(f1);
    fscanf(f1,"%li",&d);

    int s;
    printf("1.sleeper\n2.AC-3tier\n3.AC-2tier\n");
    scanf("%d",&s);
    switch(s)
    {
	case 1:
	    if(c>10||d>71)
	    {
		c=1;
		d=1;
	    }
	    else
		c++;
	    d++;
	    printf("s%li-%li \n",c,d);
	   // scanf("%s",a);
	    break;
	case 2:  
	    if(c>5||d>64)
		  {
		      c=1;
		      d=1;
		  }
		  else
		      c++;
		  d++;

		  printf("B%li-%li \n",c,d);
		  break;
	case 3:
		  if(c>5||d>46)
	       {
		   c=1;
		   d=1;
	       }
	       else
		   c++;
	       d++;
	       printf("A%li-%li \n",c,d);
	       break;
	default :
	       printf("ERROR\n");
	       break;
    }


    fclose(f1);
    f1=fopen("seat_index.txt","w");
    fprintf(f1,"%li",d);
    fclose(f1);
    fclose(f);
    return d;
}
int seat_no_generation()
{

    printf("%li",sget());
 // FILE *f=fopen("seat.txt","a");
// fprintf(f,"%li",sget());
 //   fclose(f);
    return 0;
}
