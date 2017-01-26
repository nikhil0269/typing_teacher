
#include"newuser.h"
#include"login.h"
#include"more.h"
void deco();
void gotomn(int,int);              //takes the cursor at mth row and nth column

void gotomn(int m,int n)
{
int i;
for(i=0;i<m;i++)
printf("\n");
for(i=0;i<n;i++)
printf(" ");
}

void deco()
{
char ch;
printf("Press a key to continue\n");
getch();


system("clear");

gotomn(15,44);
printf("===================================================================");
gotomn(1,45);
printf("W E L C O M E    T O    \" T Y P I N G     T E A C H E R     1.1\"");
gotomn(1,44);
printf("===================================================================");
gotomn(20,10);
printf("1 ==>>press a key to continue\n");gotomn(1,10);printf("2 ==>>press 'q' to Quit\n");
ch=getch();
if(ch=='q') { system("clear");exit(0);}
system("clear");

next1();
/*gotomn(15,50);
printf("judge yourself how fast you are "); 
gotomn(5,45);
printf("do you want to continue with the game(y/n)");
ch=getch();
system("clear");
if(ch=='n')
{
exit(0);
}

gotomn(3,0);*/
}


void next1()
{
char ch;

do{

gotomn(10,55);
printf("=========================================");
gotomn(3,65);
printf("1  -->>     PLAY ");
/*gotomn(2,65);
printf("2  -->>   TUTORIAL ");*/
gotomn(2,65);
printf("2  -->>  LOGIN GROUP");
gotomn(2,65);
printf("3 -->>    NEW GROUP ");
gotomn(2,65);
printf("4 -->>      BACK ");
gotomn(2,65);
printf("5 -->>      MORE ");
gotomn(3,55);
printf("========================================");
gotomn(5,0);
ch=getch();
switch(ch)
{
case '1':

system("clear");
break;

/*case '2':
//tutorial();
system("clear");
break;*/

case '2':
system("clear");
login();
//getch();
system("clear");
break;

case '3':
newi();
system("clear");
printf("Enter a key ");
getch();
system("clear");
break;

case '4':
deco();                  //in deco.h
break;

case '5':
more();                 //more() avliable in more.h 
break;
default:
system("clear");
}

if(ch=='1')
break;
}while(1);

//getch();
system("clear");
}



