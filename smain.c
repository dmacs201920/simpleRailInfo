#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<unistd.h>

void main()
{
  int a;
  system ("clear");
  printf("                                            :INDIAN RAILWAYS CATERING AND TOURISM CORPORATION:\n");
  printf("                                           *****************************************************\n");
 printf(" 1.Traveller\n 2.IRCTC Admin\n 3.Exit\n");
 printf("\n--->");
 scanf("%d",&a);
 getchar();
 switch(a)
 {
     case 1:
	 choice();
	 break;
     case 2:
	// admin();
	 break;
     case 3:
	 break;
     default:
	 printf("Invaild Input\n");
	 break;
 }
// getchar();
return;
}

