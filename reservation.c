#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

    void specifictrain(int train_num);
void sreservation()
{
    char ch;
    int days;
    int t,n,i=0;
    char choice;
    int train_num;
    float charges;
    pd  details;
    FILE*f=fopen("reservation.txt","a");
    system("clear");
    date();
    
    {
	if(days<0&&days>120)
    {
	printf("cannot reserve a ticket....\n");
	exit(-1);
    }
	else
	    printf("you can proceed for reservation...\n");
    }

    printf("\nnumber of seats:");
    scanf("%d",&details.num_of_seats);
    n=details.num_of_seats;
    for(i=0;i<n;i++)
    {
	printf("\nName:");
	scanf("%s",details.name);
	getchar();
	printf("\nAge:");
	scanf("%d",&details.age);
	printf("\nGender:");
	getchar();
	scanf("%c",&details.sex);
	printf("\ncontact number:");
	scanf("%llu",&details.ph_no);
	getchar();
	printf("\nAddress:");
	gets(details.address);
	//getchar();
	printf("\nAadhar number:");
	scanf("%llu",&details.aadhar);
	getchar();
	//	seat_no_generation();
    printf("\n\n>>Press Enter To View Available Trains<<\n\n ");
    getchar();
    system("clear");
    viewdetails();
    printf("\n\nEnter train number:> ");
start1:
    scanf("%d",&details.train_num);
    if(details.train_num>=0 && details.train_num<=99999)
    {	   
	charges=charge(details.train_num,details.num_of_seats);
    }
    else
    {
	printf("\nInvalid train Number! Enter again--> ");
	goto start1;
    }
	printticket(details.num_of_seats,details.name,details.age,details.sex);
	printf("do you wanted to confirm your ticket(y/n)");
	scanf("%c",&choice);
		if (choice=='y')
	{
	fprintf(f,"PNR-%llu\n",get_next_index());
    specifictrain(train_num);
	fprintf(f,"no of seats: %d\n",details.num_of_seats);
	fprintf(f,"name: %s\n",details.name);
	fprintf(f,"age: %d\n",details.age);
	fprintf(f,"gender: %c\n",details.sex);
	fprintf(f,"phone no: %llu\n",details.ph_no);
	fprintf(f,"address: %s\n",details.address);
	fprintf(f,"aadhar_no: %llu\n",details.aadhar);
//	fprintf(f,"seat no:%li %li\n",sget());
	sget();
	}
	else
	{
	    printf("your ticket is not booked\n");
	}
    }
    fclose(f);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printticket(int num_of_seats,char name[],int age,char sex)
    {
	printf("your journey ticket :\n");
//	printf("PNR-%llu\n",pnr());
	printf("no of seats: %d\n",num_of_seats);
	printf("name: %s\n",name);
	printf("age: %d\n",age);
	printf("gender: %c\n",sex);

    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float charge(int train_num,int num_of_seats)
{

    if(train_num>=0 && train_num<=99999)
    {
	return(6000.0*num_of_seats);
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void specifictrain(int train_num)
    {

	// FILE *f=fopen("t1_bang.txt","r");
	FILE *f1=fopen("t1_vizag.txt","r");
	char b[5];char q[150];int flag=0 ;
	if (f1!=NULL){
	    fgets(q,150,f1);
	    while(!feof(f1)){
		//	    	    fscanf(q,"%d",&b);
		//	    if(strcmp(b,itoa(train_num))==0)
		{
		    puts(q);
		    //		scanf("%s",q);
		    //		getchar();
		    flag=1;
		}
		//	    fgets(a,150,f);
		fgets(q,150,f1);

	    }
	    if(flag==0)
	    {
		printf("\ntrain not found\n");
	    }
	    //	fclose(f);
	    fclose(f1);
	}
    } 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
