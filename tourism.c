#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<unistd.h>
//#include<time.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/*int time()
  {
  time_t T= time(NULL);
  struct  tm *t = localtime(&T);


  T=time(NULL);
  t=localtime(&T);
  system("clear");
  {
  printf("System Date is: %d/%d/%d\n",t->tm_mday, t->tm_mon+1, t->tm_year+1900);
  printf("System Time is: %d:%d:%d\n",t->tm_hour, t->tm_min, t->tm_sec);
  }

  return 0;
  }*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int  trains()
{
    printf("choose your train..\n");
    sleep(1.2);
    int a;
s:    printf("                                  1.MAHARAJA EXPRESS\n");
      printf("                                  2.GOLDEN CHARIOT\n");
      printf("                                  3.DECCAN ODESSEY\n");
      printf("                                  4.PALACE ON WHEELS\n");
      printf("                                  5.ROYAL RAJASTHAN ON WHEELS\n");
      printf("                                  6.EXIT\n");
      scanf("%d",&a);
      switch(a)
      {
	  case 1:
	      maharaja();
	      goto s;
	      break;
	  case 2:
	      golden();
	      goto s;
	      break;
	  case 3:
	      deccan();
	      goto s;
	      break;
	  case 4:
	      palace();
	      goto s;
	      break;
	  case 5:
	      raj_roy();
	      goto s;
	      break;
	  case 6:
	      return 0;
	      break;
	  default:
	      printf("Invaild Input\n");
	      break;
      }
      return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int treservation()
{
    printf("choose your train..\n");
    sleep(1.2);
    int a;
s:    printf("                                  1.MAHARAJA EXPRESS\n");
      printf("                                  2.GOLDEN CHARIOT\n");
      printf("                                  3.DECCAN ODESSEY\n");
      printf("                                  4.PALACE ON WHEELS\n");
      printf("                                  5.ROYAL RAJASTHAN ON WHEELS\n");
      printf("                                  6.EXIT\n");
      scanf("%d",&a);
      switch(a)
      {
	  case 1:
	      tmaharaja();

	      goto s;
	      break;
	  case 2:
	      tgolden();
	      goto s;
	      break;
	  case 3:
	      tdeccan();
	      goto s;
	      break;
	  case 4:
	      tpalace();
	      goto s;
	      break;
	  case 5:
	      traj_roy();
	      goto s;
	      break;
	  case 6:
	      return 0;
	      break;
	  default:
	      printf("Invaild Input\n");
	      break;
      }
      return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void maharaja(void)
{
    FILE*f=fopen("maharaja.txt","r");
    char s[1000];	
    while(!feof(f))
    {

	fgets(s,1000,f);
	puts(s);	
    }
    fclose(f);

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void golden(void)
{

    char s[1000];	
    FILE*f=fopen("golden.txt","r");
    while(!feof(f))
    {
	fgets(s,1000,f);
	puts(s);	
    }
    fclose(f);

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void deccan(void)
{

    char s[1000];	
    FILE*f=fopen("deccan.txt","r");
    while(!feof(f))
    {
	fgets(s,1000,f);
	puts(s);	
    }
    fclose(f);

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void palace(void)
{

    char s[1000];	
    FILE*f=fopen("palace.txt","r");
    while(!feof(f))
    {
	fgets(s,1000,f);
	puts(s);	
    }
    fclose(f);

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void raj_roy(void)
{

    char s[1000];	
    FILE*f=fopen("raj_roy.txt","r");
    while(!feof(f))
    {
	fgets(s,1000,f);
	puts(s);	
    }
    fclose(f);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float tcharge(int num_of_seats)
{
    printf("please select the same train that you had choosen before\n ");
    int a;
    printf("                                  1.MAHARAJA EXPRESS\n");
    printf("                                  2.GOLDEN CHARIOT\n");
    printf("                                  3.DECCAN ODESSEY\n");
    printf("                                  4.PALACE ON WHEELS\n");
    printf("                                  5.ROYAL RAJASTHAN ON WHEELS\n");
    printf("                                  6.EXIT\n");
    scanf("%d",&a);
    switch(a)

    {
	case 1:
	    return(1553700.0*num_of_seats);
	    break;
	case 2:
	    return(760000.0*num_of_seats);
	    break;
	case 3:
	    return(545000.0*num_of_seats);
	    break;
	case 4:
	    return(453600.0*num_of_seats);
	    break;
	case 5:
	    return(438000.0*num_of_seats);
	    break;
	case 6:
	    return 0;
	    break;
	default: 
	    break;
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void tmaharaja()
{
    char confirm,ch;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seek_traveller_info.txt","a");
    system("clear");
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
    scanf("%llu",&passdetails.ph_no);
    printf("\nAddress:> ");
    getchar();
    scanf("%s",passdetails.address);
    charges=tcharge(passdetails.num_of_seats);
    printticket_t(passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,charges);
fclose(fp);    
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////
void printticket_t(char name[],int age,char sex,int num_of_seats,float charges)
{
    system("clear");
    printf("-------------------\n");
    printf("\tTICKET\n");
    printf("-------------------\n\n");
    printf("Name:\t\t\t%s\n",name);
    printf("Age:\t\t\t%d\n",age);
    printf("Gender:\t\t\t%c\n",sex);
    printf("Number Of Seats:\t%d\n",num_of_seats);
    printf("Charges:\t\t%.2f\n",charges);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void tgolden()
{
    char confirm,ch;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seek_traveller_info.txt","a");
    system("clear");
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
    scanf("%llu",&passdetails.ph_no);
    printf("\nAddress:> ");
    getchar();
    scanf("%s",passdetails.address);
    charges=tcharge(passdetails.num_of_seats);
    printticket_t(passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,charges);	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tdeccan()
{
    char confirm,ch;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seek_traveller_info.txt","a");
    system("clear");
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
    scanf("%llu",&passdetails.ph_no);
    printf("\nAddress:> ");
    getchar();
    scanf("%s",passdetails.address);
    charges=tcharge(passdetails.num_of_seats);
    printticket_t(passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,charges);	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void traj_roy()
{
    char confirm,ch;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seek_traveller_info.txt","a");
    system("clear");
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
    scanf("%llu",&passdetails.ph_no);
    printf("\nAddress:> ");
    getchar();
    scanf("%s",passdetails.address);
    charges=tcharge(passdetails.num_of_seats);
    printticket_t(passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,charges);	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tpalace()
{
    char confirm,ch;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seek_traveller_info.txt","a");
    system("clear");
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
    scanf("%llu",&passdetails.ph_no);
    printf("\nAddress:> ");
    getchar();
    scanf("%s",passdetails.address);
    charges=tcharge(passdetails.num_of_seats);
    printticket_t(passdetails.name,passdetails.age,passdetails.sex,passdetails.num_of_seats,charges);	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tourism()
{
    int s;
    sleep(0.5123564653);
s:    printf("\n                           1.check trains\n"); 
      printf("\n                           2.Reserve a ticket\n");
      printf("\n                            3.exit\n"); 
      scanf("%d",&s);
      switch(s)
      {
	  case 1:
	      trains();
	      goto s;
	      break;
	  case 2:
	      treservation();
	      break;
	  case 3:
	      return 0;
	      break;
	  default :
	      printf("Invalid Input\n");
      }

      return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
