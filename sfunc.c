
#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<unistd.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int choice()
{
    int a;
s:    system ("clear");
    printf("\n                                      :INDIAN RAILWAYS CATERING AND TOURISM CORPORATION:\n");
    printf("                                     ****************************************************\n");
    sleep(1.5);
    printf(" 1.TRAINS AT GLANCE\n 2.TOURISM\n 3.MEALS ON WHEELS\n 4.PNR STATUS\n 5.ABOUT US\n 6. EXIT\n");
    printf("\n--->");
    scanf("%d",&a);
    getchar();
    switch(a)
    {
	case 1:
	    search();
	    goto s;
	    break;
	case 2:
	    sleep(1.2);
	    printf("\n                                          IRCTC TOURISM CORPORATION\n");
	    printf("                                       **********************************\n");
	    sleep(2);
	    printf("Welcome To Tourism...\n");
	    sleep(.37647777777777777);
	    printf("\nA New Way To Explore India\n");
	    tourism();
	    goto s;
	    break;
	case 3:
	    meals_on_wheels();
	    goto s;
	    break;
	case 4:
	    break;
	case 5:
	    break;
	case 6:
	    return 0;
	    break;
	default:
	    printf("\nINVALID INPUT\n");
    }
    //getchar();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void search(void)
{
    system("clear");
    sleep(.7536563);
    printf("\t\t                                ...............................................\n");
    printf("\t\t                                           $$$--WELCOME TO IRCTC--$$$           \n");
    printf("\t\t                                ...............................................\n\n\n");
sleep(.7892);

    printf(" \n please enter choose you option :\n");

    getchar();
start:  system("clear");
	int menu_choice,choice_return;char k[500];
	FILE *f1;
	printf("                                                **::AN EASY WAY TO CONNECT YOU TO TRAINS::**\n");
	printf("                                                *..........................................*\n");
	sleep(.5431);
	printf("\n                                              ");
	printf("\n                                              ");
	printf("\n                                              ");
	printf("\n                                              ");
	sleep(0.92);
	printf("\n                                              1>> FROM--TO");

	printf("\n                                              2>>Reserve For Me");
	printf("\n                                              3>> view trains ");
	//	printf("\n                                              6>> still in progress.. sorry ..");
	printf("\n                                              4>> Exit");
	printf("\n                                              \n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
	    case 2:
		sreservation();
		break;
	    case 1:
		from_to();
		break;
	    case 3:

		viewdetails(); 
		printf("\n\nPress any key to go to Main Menu..");
		getchar();
		break;
	    case 4:
		return;
	    default:
		printf("\nInvalid choice\n");
	}

	getchar();
	goto start;
	return;
}


