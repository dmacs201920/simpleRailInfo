#include<stdio.h>
#include<stdlib.h>
#include"header.h"
unsigned  long long get_next_index();

int pnr()
{ 
    unsigned  long long j;
	j=get_next_index();
	printf("PNR-%llu\n",j);
    return j;
}
unsigned  long long get_next_index()
{
    FILE *f=fopen("seed_pnr.txt","r");
    FILE *f1=fopen("running_index.txt","r");
    unsigned long  long s=0,t=0;
     unsigned long  long *s_ptr = &s; unsigned long long *t_ptr = &t;
   // fread(s_ptr, sizeof( long ),1,f);
    //fread(t_ptr, sizeof(int),1,f1);
     fscanf(f,"%llu",&s);
     rewind(f1);
    fscanf(f1,"%llu",&t);
//    s=getw(f);
  //  t=getw(f1);
    
    //printf("Seed PNR - %llu\n", s);
    //printf("Index - %llu\n", t);
    fclose(f1);
   f1=fopen("running_index.txt","w"); 
    t=t+1;
     //fwrite(t_ptr,sizeof(unsigned long long),1,f1);
   // long * k_ptr = &k;
    fprintf(f1,"%llu",t);
    fclose(f); 
    fclose(f1); 
    return s+t;
   // return s+t;

}

