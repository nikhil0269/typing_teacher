#include<stdio.h>
#include<stdlib.h>
#include"deco.h"
#include"random_file.h"
void speed();

char name[15]="user";

void main()
{
int x=0;
char ch;

deco();
bot_deco:
if(x==1)
{
next1();
}
FILE*fp;
/*fp=fopen(argv[1],"r");

if(fp==NULL){
printf("file could not open\n");
exit(0);}
*/
//getch();
fp=random_file();
printf("Enter your name\n");
//fgets(name,10,stdin);
 scanf("%10s",name);
speed(fp);

ranking();
getch();
x=1;
system("clear");
goto bot_deco;
}
