/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
char q[150];
int order_count = 0, served_count = 0, waiting_now = 0;

////////////////////////////////////////////////////////////////////////////////////////////////
char *itoa(long int a)
{
    char *s;
    int i=-1;
    long int t=a;
    while(t!=0)
    {
	t=t/10;
	i++;
    }
    if(i==-1)
    {
	s=(char *)malloc(2);
	s[0]='0';
	s[1]='\0';
	return s;
    }
    s=(char*)malloc(i+1);
    s[i+1]='\0';
    while(a!=0)
    {
	t=a%10;
	a=a/10;
	s[i]=t+48;
	i--;
    }
    return s;
}
//////////////////////////////////////////////////////////////////////////////////

int  meals_on_wheels()
{

    printf(" \n Press any key to continue:");
    system("clear");

    {
	printf ("\t\t     MEALS ON WHEELS \n");
	while (1){
	    printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

	    int in;
	    scanf ("%d", &in);
	    getchar ();
	    switch (in)
	    {
		case 1 : {
			     order ();
			     break;
			 }
		case 2 : {
			     receive();
			     break;
			 }
		case 3 : {
			     display();
			     break;
			 }
		case 4 : {
			     system ("clear");
			     printf (" enter main menu\n\n");

			     return 0;
			 }
	    }
	}

    }
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void select_choice (void)

{
    while(1)
    {
	system("clear");
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");


	printf(" \n Press any key to continue:");

	getchar();
	system("clear");
	int menu_choice,choice_return;char k[500];
	FILE *f1;
start1:             system("clear");
		    printf("\n                                       =================================\n");
		    printf("                                            TRAIN RESERVATION SYSTEM");
		    printf("\n                                       =================================");
		    printf("\n1>> Reserve A Ticket");
		    printf("\n------------------------");
		    printf("\n2>> View All Available Trains");
		    printf("\n------------------------");
		    printf("\n3>> Cancel Reservation");
		    printf("\n------------------------");
		    printf("\n4>> DISPLAY");
		    printf("\n------------------------");
		    printf("\n5>> Exit");
		    printf("\n------------------------");
		    printf("\n\n-->");
		    scanf("%d",&menu_choice);
		    switch(menu_choice)
		    {
			case 1:
			    //reservation();
			    break;
			case 2:
			    viewdetails(); 
			    printf("\n\nPress any key to go to Main Menu..");
			    getchar();
			    break;
			case 3:
			    cancel();
			    break;
			case 4:
			    f1=fopen("seats_reserved.txt","r");
			    fgets(k,450,f1);
			    while(!feof(f1))
			    {
				puts(k);
				fgets(k,450,f1);
			    }
			    fclose(f1);
			    getchar();
			    break;
			case 5:
			    puts("\npress enter to goback to main menu\n");
			    return;
			    break;
			default:
			    printf("\nInvalid choice");
		    }
		    getchar();
		    goto start1;
		    return;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void viewdetails(void)
{
    system("clear");
    fflush(stdin);
    FILE *f=fopen("t1_bang.txt","r");
    FILE *f1=fopen("t1_bhub.txt","r");
    FILE *f2=fopen("t1_vizag.txt","r");
    char a[1000],a1[1000],a2[1000];
    while(!feof(f)||!feof(f1)||!feof(f2))
    {
	puts("press enter to go to main menu....\n");
	puts("\nchoose your route");
	getchar();
	system("clear");
	int menu_choice,choice_return;char k[500];

	system("clear");
	printf("\n1>>BANGLORE ROUTE");
	printf("\n------------------------");
	printf("\n2>> BHUBANESHWAR ROUTE");
	printf("\n------------------------");
	printf("\n3>> VISAKHAPATNAM ROUTE");
	printf("\n------------------------");
	printf("\n4>> still in progress.. sorry ..");
	printf("\n------------------------");
	printf("\n5>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
	    case 1:
		while (!feof(f))
		{
		    fgets(a,1000,f);
		    puts(a);
		}
		getchar();
		break;

	    case 2:
		while (!feof(f1))
		{
		    fgets(a1,1000,f1);
		    puts(a1);
		}
		getchar();
		break;

	    case 3:
		while (!feof(f2))
		{
		    fgets(a2,1000,f2);
		    puts(a2);
		}
		getchar();
		break;

	    case 5:
		return ;	
		break;
	}
    }
    fclose(f);
    fclose(f1);
    fclose(f2);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
/*void reservation(void)
{
    char confirm,ch;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seats_reserved.txt","a");
    rewind(fp);
    ch=fgetc(fp);
    if(feof(fp))
    {
	fprintf(fp,"NAME		AGE		GENDER		SEATS		 train_no		FARE		\n");
    }
    fseek(fp,0,SEEK_END);
    system("clear");
    fflush(stdin);
    printf("\nEnter Your Name:> ");
    getchar();
    scanf("%s",passdetails.name);
    printf("\n AGE:> ");
    scanf("%d",&passdetails.age);
    printf("\n GENDER:> ");
    getchar();
    scanf("%c",&passdetails.sex);
    printf("\nEnter Number of seats:> ");
    scanf("%d",&passdetails.num_of_seats);
    printf("\nContact number:> ");
    scanf("%d",&passdetails.ph_no);
    printf("\nAddress:> ");
    getchar();
    scanf("%s",passdetails.address);
    date();
    getchar();
    printf("\n\n>>Press Enter To View Available Trains<<\n\n ");
    getchar();
    system("clear");
    viewdetails();
    printf("\n\nEnter train number:> ");
start1:
    scanf("%d",&passdetails.train_num);
    if(passdetails.train_num>=0 && passdetails.train_num<=99999)
    {	   
	charges=charge(passdetails.train_num,passdetails.num_of_seats);
	printticket(passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,passdetails.train_num,charges);	
    }
    else
    {
	printf("\nInvalid train Number! Enter again--> ");
	goto start1;
    }

    printf("\n\nConfirm Ticket (y/n):>");
start:
    scanf(" %c",&confirm);
    if(confirm == 'y')
    {
	fprintf(fp,"%s\t\t%d\t\t%c\t\t%d\t\t%d\t\t%.2f\n",passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,passdetails.train_num,charges);
	printf("==================");
	printf("\n Reservation Done\n");
	printf("==================");
	printf("\nPress any key to go back to Main menu");
    }
    else
    {
	if(confirm=='n'){
	    printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
	}
	else
	{
	    printf("\nInvalid choice entered! Enter again-----> ");
	    goto start;
	}
    }
    fclose(fp);
    getchar();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
float charge(int train_num,int num_of_seats)
{

    if(train_num>=0 && train_num<=99999)
    {
	return(6000.0*num_of_seats);
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////
void printticket(char name[],int age,char sex,int num_of_seats,int train_num,float charges)
{
    system("clear");
    printf("-------------------\n");
    printf("\tTICKET\n");
    printf("-------------------\n\n");
    printf("Name:\t\t\t%s\n",name);
    printf("Age:\t\t\t%d\n",age);
    printf("Gender:\t\t\t%c\n",sex);
    printf("Number Of Seats:\t%d\n",num_of_seats);
    specifictrain(train_num);
    printf("Train Number:\t\t%s\n",q);
    printf("Charges:\t\t%.2f\n",charges);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void cancel(void)   
{

    system("clear");
    int trainnum;
    printf("-----------------------\n");
    printf("Enter the train number: \n");
    printf("-----------------------\n");
    fflush(stdin);
    scanf("%i",&trainnum);
    printf("\n\nCancelled");  
    getchar();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pnr_no(void)
{
    FILE *fp=fopen("t1_bang.txt","r");
    int i=0;char a[11],b[4],s[150];
    fgets(s,150,fp);
    while(i<strlen(s))
    {
	sscanf(s,"%s",a);
	{
	    if(strcmp(a,"Express")==0)
	    {
		b[0]='4',b[1]='5',b[2]='0',b[3]='-';
		printf("%s",b);
	    }
	}
    }
    fclose(fp);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

    int items()
    {
	printf("..................................MENU....................................\n");

	printf("Item Code#   Description-------------------Size--------------------Price(/-)\n");

	printf("[11]---------Burger---------------------200/300gm------------------130/180\n");
	printf("[12]---------VegPizza--------------12/14/16inch---------------750/975/1250\n");
	printf("[13]---------Panner Manchurian--------------1/4/10 crt-----------------85/320/790\n");
	printf("[14]---------Spl Biryani------------quarter/half/full----------70/140/250\n");
	printf("[15]---------Noodles--------------------Half/Full------------------130/250\n");
	printf("[16]---------Pasta/Macaroni----------------------Half/Full------------------120/240\n");
	printf("[17]---------Oreo Shake-----------------250mg----------------------180\n");
	printf("[18]---------Cold Coffee----------------250mg----------------------65\n");
	printf("[19]---------Cappuccino-----------------250mg----------------------70\n");
	printf("[20]---------Coke-----------------------250/500mg------------------20/30\n\n");

	return 0;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int order ()
    {
	int n, in, qu;
	printf ("please enter your name: ");
	scanf("%s",p[order_count].name);
	p[order_count].order_number = 10000+order_count;
	items();
	p[order_count].number_of_food = n;
	p[order_count].cost = 0;
	p[order_count].number_of_food = 0;
level:
	printf ("How many items you want to order? ");
	scanf ("%d", &n);

	getchar ();
	while (n--){
	    printf ("\nEnter chosen item code\n");
	    scanf ("%d", &in);
	    getchar();
	    switch(in){
		case 11 : {
			      printf ("Enter the size of burger: 1. 200gm  2. 300gm\n");
			      int i;
			      scanf ("%d", &i);
			      getchar();

			      printf ("Please enter the quantity: ");
			      scanf ("%d", &qu);
			      getchar();

			      p[order_count].number_of_food +=qu;

			      if (i==1) p[order_count].cost += (130*qu);

			      else p[order_count].cost += (180*qu);
			      break;
			  }
		case 12 :{
			     printf ("Enter the size of Veg Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
			     int i;
			     scanf ("%d", &i);
			     getchar();

			     printf ("Please enter the quantity: ");
			     scanf ("%d", &qu);
			     getchar();
			     p[order_count].number_of_food +=qu;

			     if (i==1) p[order_count].cost += (750*qu);

			     else if (i==2) p[order_count].cost += (975*qu);

			     else  p[order_count].cost += (1250*qu);

			     break;
			 }
		case 13 :{
			     printf ("Enter the amount of Panner Manchuruian: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
			     int i;
			     scanf ("%d", &i);
			     getchar();

			     printf ("Please enter the quantity: ");
			     scanf ("%d", &qu);
			     getchar();

			     p[order_count].number_of_food +=qu;

			     if (i==1) p[order_count].cost += (85*qu);

			     else if (i==2) p[order_count].cost += (320*qu);

			     else  p[order_count].cost += (790*qu);

			     break;
			 }
		case 14 :{
			     printf ("Enter the size of Special Biryani: 1. quarter  2. half  3. full\n");
			     int i;
			     scanf ("%d", &i);
			     getchar();

			     printf ("Please enter the quantity: ");
			     scanf ("%d", &qu);
			     getchar();

			     p[order_count].number_of_food +=qu;

			     if (i==1) p[order_count].cost += (70*qu);

			     else if (i==2) p[order_count].cost += (140*qu);

			     else  p[order_count].cost += (250*qu);

			     break;
			 }
		case 15 :{
			     printf ("Enter the size of Noodles: 1. half  2. full\n");
			     int i;
			     scanf ("%d", &i);
			     getchar();

			     printf ("Please enter the quantity: ");
			     scanf ("%d", &qu);
			     getchar();

			     p[order_count].number_of_food +=qu;

			     if (i==1) p[order_count].cost += (130*qu);

			     else p[order_count].cost += (250*qu);

			     break;
			 }
		case 16 :{
			     printf ("Enter the size of pasta/macaroni: 1. half  2. full\n");
			     int i;
			     scanf ("%d", &i);
			     getchar();

			     printf ("Please enter the quantity: ");
			     scanf ("%d", &qu);
			     getchar();

			     p[order_count].number_of_food +=qu;

			     if (i==1) p[order_count].cost += (120*qu);

			     else p[order_count].cost += (240*qu);

			     break;
			 }
		case 17 : {
			      printf ("250 mg of OREO SHAKE\n");

			      printf ("Please enter the quantity: ");
			      scanf ("%d", &qu);
			      getchar();

			      p[order_count].number_of_food +=qu;
			      p[order_count].cost += (180*qu);
			      break;
			  }
		case 18 : {
			      printf ("250 mg of Cold Coffee\n");

			      printf ("Please enter the quantity: ");
			      scanf ("%d", &qu);
			      getchar();

			      p[order_count].number_of_food +=qu;
			      p[order_count].cost += (65*qu);
			      break;
			  }
		case 19 : {
			      printf ("250 mg of Cappuccino\n");

			      printf ("Please enter the quantity: ");
			      scanf ("%d", &qu);
			      getchar();

			      p[order_count].number_of_food +=qu;
			      p[order_count].cost += (70*qu);
			      break;
			  }
		case 20 :{
			     printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
			     int i;
			     scanf ("%d", &i);
			     getchar();

			     printf ("Please enter the quantity: ");
			     scanf ("%d", &qu);
			     getchar();

			     p[order_count].number_of_food +=qu;

			     if (i==1) p[order_count].cost += (20*qu);

			     else p[order_count].cost += (30*qu);
			     break;
			 }
		default : {
			      printf ("Invalid selection try again\n");
			      n++;
			  }
	    }
	}
	char temp;
	printf ("Do you want to order anything else?(y/n)\n ");
	scanf("%c", &temp);
	if (temp == 'y' || temp == 'Y')
	    goto level;
	printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
	printf ("\nThank you %s for your order. Your bill is %d/-.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
	order_count ++;
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int receive ()
{
    if (order_count==0){
	printf ("Please order first\n");
	return 0;
    }

    else if (served_count == order_count) {
	printf ("All order served\n");
	return 0;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

