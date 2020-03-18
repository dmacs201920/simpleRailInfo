#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct
{
    int num_of_seats;
    char name[50];
    int train_num;
    int age;
    char sex;
    unsigned long long ph_no;
    char address[500];
    unsigned long long  aadhar;
}pd;

struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];


unsigned long long get_next_index();
void print();
long  sget();
int seat_no_generation();
int s_no();
int pnr();
void sreservation();
int date();
void splitdate(char*date,int *y,int *m,int *d);
void revjulian(int j,int y,int *d,int *m);
int isleap(int year);
void diffYMD (char *date1,char *date2,int *y,int *m,int *d);
int diffDays(char *daite1,char *date2);
int cmpDate(char *date1,char *date2);
int isvalid(char *date);
int julian(int d,int m,int y);
int treservarion();
void tmaharaja();
int choice();
void maharaja();
void golden();
void tgolden();
void deccan();
void tdeccan();
void palace();
void tpalace();
void raj_roy();
void traj_roy();
int trains();
int tourism(void);
void from_to(void);
void search(void);
void select_choice (void);
void reservation(void);						
void viewdetails(void);						
void cancel(void);								
void printticket(int, char name[],int,char);	 
void printticket_t(char name[],int,char,int,float);	 
void specifictrain(int);						
float charge(int,int);							
float tcharge(int);							
int meals_on_wheels();
int items();
int receive();
int display();
int order();
static int getnode(void);
static void freenode(int);
void remw(int,int);
int adjacent (int ,int);
int find(int ,int);
void disp(int);
void joinwt(int p, int q, int wt);
int addnode(int *pgraph, int x);
