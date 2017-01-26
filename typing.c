#include<sys/time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"conio.h"
#include"header.h"
FILE*f_user;
void leader_board();
double words,tm,spd_wpm,spd_cps;

char array[150];
char name[20];

void clear_stdin()
{
while((getchar())!='\n');
}

void speed(FILE*fs)
{
int chs=0,new_line=0,space=0;
char ch,ch1;
int wrong=0;
/*fs=fopen(argv[1],"r");
if(fs==NULL)
{
printf("file cannot be open\n");
exit(0);
}*/
struct timeval tv1,tv2;
printf("press a key when you are ready\n");
clear_stdin();
getch();
system("clear");
while(1)
{
ch=fgetc(fs);
if(ch==EOF)
break;
printf("%c",ch);
}
//fclose(fs);
gotomn(5,0);

FILE*ft;
ft=fopen("result","w");
{
if(ft==NULL)
{
printf("\nfile could not open\n");
exit(0);
}
}
fflush(stdin);
gettimeofday(&tv1,NULL);
/*while(1)
{
gets(array);
if(strlen(array)==0)
break;
fputs(array,ft);
fputs("\n",ft);
}*/
fseek(fs,SEEK_SET,0);
while(1)
{
ch=fgetc(fs); 
if(ch==EOF)
break;
sos:
ch1=getch();
if(ch==ch1)
{
//do some stuff
fputc(ch1,ft);
printf("%c",ch1);
}
else
{
wrong++;
goto sos;
}
}

gettimeofday(&tv2,NULL);
tm=(double)(tv2.tv_sec-tv1.tv_sec)+(double)(tv2.tv_usec-tv1.tv_usec)/1000000;
//printf("%lf",tm);
//printf("\n%lf",words);
fclose(ft);
fclose(fs);
ft=fopen("result","r");
while(1)
{
ch=fgetc(ft);
if(ch==EOF)
break;
chs++;
if(ch==' ')
space++;
if(ch=='\n')
new_line++;

}

gotomn(4,0);
words=new_line+space;
//printf("You typed with %d characters in %lf second \n\n",chs,tm);
//printf("Typed words are %lf in %lf seconds\n\n",words,tm);
spd_wpm=(words*60)/tm;
spd_cps=chs/tm;
printf("your typing speed is %lf characters per second\n",spd_cps);
printf("\nyour typing speed is %lf words per minute\n\n",spd_wpm);
printf("you pushed %d wrong keys\n\n",wrong);
printf("you typed with accuracy of %lf \n\n",(chs)*100/(float)(chs+wrong));

leader_board();                                                        //leader_board function call

sort();                                                                //sort leader_board

rank_list();                                                           //rank_list function call
chs=new_line=space=0;
spd_cps=spd_wpm=0;
tm=words=0;
}



void leader_board()
{

FILE*fl;
fl=fopen("leader_board","a");


struct leader_b
{
char name[20];
double spd_wpm;
double spd_cps;
};

struct leader_b l1;
strcpy(l1.name,name);
l1.spd_wpm=spd_wpm;
l1.spd_cps=spd_cps;

fprintf(fl,"%20s%10lf wpm  %10lf cps\n",l1.name,l1.spd_wpm,l1.spd_cps);
if(f_user!=NULL)
fprintf(f_user,"%20s%10lf wpm  %10lf cps\n",l1.name,l1.spd_wpm,l1.spd_cps);

fclose(fl);
}


