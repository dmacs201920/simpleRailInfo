#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
void sreservation()
{
    char ch;
    int days;
    int t,n,i=0;
    char choice;
    float charges;
    pd  details;
    FILE*f=fopen("reservation.txt","a");
    system("clear");
//    date();
    
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
	printticket(details.num_of_seats,details.name,details.age,details.sex);
	printf("do you wanted to confirm your ticket(y/n)");
	scanf("%c",&choice);
		if (choice=='y')
	{
	fprintf(f,"PNR-%llu\n",get_next_index());
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

