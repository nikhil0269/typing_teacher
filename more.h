


void more()
{

system("clear");

char ch;

do{



gotomn(10,55);
printf("====================================");
gotomn(3,65);
printf(" 1 -->>    BACK ");
gotomn(3,65);
printf("2  -->>    GROUP  ");

/*gotomn(3,65);
printf("3  -->>    HELP ");*/

gotomn(3,65);
printf("3  -->>    ABOUT  ");
gotomn(3,55);
printf("====================================");
ch=getch();

switch(ch)
{

case '2':
group();
break;

/*case '3':
help();
break;*/

case '3':
about();
break;


}

system("clear");

}while(ch!='1');

}


void group()
{
char ch;
system("clear");

printf("   All groups and their keys  :\n\n ");
FILE*fp;
fp=fopen(".password","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
printf("%c",ch);
}

getch();
}


/*void help()
{


}*/


void about()
{
system("clear");
gotomn(15,25);
printf("This is \"TYPING TEACHER 1.1\" developed by \"NIKHIL KUMAR MISHRA\"");
gotomn(2,25);
printf("For any query contact - Email : nikhil0269@gmail.com or nikhil0269@yahoo.com");
getch();
}


