#include<sys/time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int comperator(const void*,const void*);

/*void gotomn(int m,int n)
{
int i;
for(i=0;i<m;i++)
printf("\n");
for(i=0;i<n;i++)
printf(" ");
}*/


struct leader_b
{
char name[20];
double spd_wpm;
char a[4];
double spd_cps;
char b[4];
};


struct leader_b l1[2000];
/*void main()
{
int i;
sort();
for(i=0;i<20;i++)
{
printf("%20s\t\t%lf wpm\t\t%lf cps\n",l1[i].name,l1[i].spd_wpm,l1[i].spd_cps);
}
}*/
//struct leader_b *l1;

int comperator(const void *v1,const void *v2)
{
struct leader_b *a,*b;
a=(struct leader_b*)v1;
b=(struct leader_b*)v2;
if((b->spd_wpm)<(a->spd_wpm)) return -1;
if((b->spd_wpm)>(a->spd_wpm)) return 1;
return 0;
}
void sort()
{

char ch;
int i=0,line=0;
FILE*fs;
fs=fopen("leader_board","r");

if(fs==NULL){
printf("file could not be open\n");
exit(0);}

/*while(1)
{
ch=fgetc(fs);
if(ch==EOF)
break;
if(ch=='\n')
line++;
}*/

//l1=(struct leader_b*)malloc(line*sizeof(struct leader_b));

while(fscanf(fs,"%s%lf%s%lf%s",l1[i].name,&l1[i].spd_wpm,l1[i].a,&l1[i].spd_cps,l1[i].b)!=EOF)
{
i++;
}
/*for(i=0;i<20;i++)
printf("%20s\t%lf\t%lf\n",l1[i].name,l1[i].spd_wpm,l1[i].spd_cps);*/
qsort(l1,2000,sizeof(struct leader_b),&(comperator));

fclose(fs);
}

void rank_list()
{
FILE*fr;
fr=fopen("rank_list","w");
int i;
for(i=0;i<10;i++)
{
fprintf(fr," %10d  %10s%14lf \n\n",i+1,l1[i].name,l1[i].spd_wpm);
//fputc("\n",fr);
}
fclose(fr);
}

void ranking()
{
printf("Enter a key\n");
getch();
system("clear");
printf("TOP 10 in words per minute\n");
gotomn(5,0);
char ch;
FILE*fp;
fp=fopen("rank_list","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF) break;
printf("%c",ch);
}
fclose(fp);
/*getch();
system("clear");
next1();*/
}
