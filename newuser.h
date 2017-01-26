write_passwd(char uname[],char passwd[])             //write username and passward to file
{

struct user
{
char name[20];
char passwd[15];
};
struct user w;
FILE*fw;
fw=fopen(".password","a");
strcpy(w.name,uname);
strcpy(w.passwd,passwd);
//printf("%s %s ",w.name,w.passwd); getch();
fprintf(fw,"%20s\t\t %15s",w.name,w.passwd);
//fprintf(fw,"\n");
fclose(fw);
}

void newi()                                        //To take input username and passward from new user
{
int i,check;

char username[20];
//char same[15];
char passwd[15];
char passwd1[15];

sosn:
//strcpy(passwd,same);
//strcpy(passwd1,same);

for(i=0;i<15;i++)
passwd[i]='\0';
for(i=0;i<15;i++)
passwd1[i]='\0';

system("clear");
printf("ENTER GROUP NAME : "); scanf("%20s",username);clear_stdin();
printf("ENTER GROUP KEY : ");
for(i=0;i<15;i++)
{
passwd[i]=getch();
if(passwd[i]=='\n')break;
}
printf("\nRE ENTER GROUP KEY : ");
for(i=0;i<15;i++)
{

passwd1[i]=getch();
if(passwd1[i]=='\n')break;
}
check=strcmp(passwd,passwd1);
if(check!=0)
{
printf("passwards are not match \n");
printf("Enter a key"); getch();
goto sosn;
}
/*puts(username);
puts(passwd);
puts(passwd1);*/
write_passwd(username,passwd);

}

/*void main()

{
newi();
}*/
