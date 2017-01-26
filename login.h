
struct user
{
char name[35];
char passwd[15];
};
FILE*f_user;
//char user_file[35];
void login()
{
struct user urc,urf;                //urc variable (user read from console ) and urf variable (user read from file)

FILE*fp;
fp=fopen(".password","r");

sop:
fseek(fp,0,SEEK_SET);
printf("GROUP NAME : "); scanf("%35s",urc.name);
clear_stdin();
/*if(strcmp(urc.name,urf.name))
{
printf("\n No user with this name \n\n");

}*/

printf("GROUP KEY : "); scanf("%15s",urc.passwd);
clear_stdin();
/*if(strcmp(urc.passwd,urf.passwd))
{
printf("wrong passward\n");

}*/

sos:
if(fscanf(fp,"%s%s",urf.name,urf.passwd)==EOF)
{
printf("\nyour GROUP NAME or GROUP KEY may be incorrect\n");
printf("\n\BACK : 'b'\n");
printf("\nPress any key to login again\n");

if(getch()=='b')
return ;
system("clear");
goto sop;
}

if((strcmp(urc.name,urf.name)==0)&&(strcmp(urc.passwd,urf.passwd)==0))
{
printf("\n\n you successfully login \n");
getch();


strcat(urc.name,urc.passwd);

f_user=fopen(urc.name,"a");


fclose(fp);


return ;
}
else
{
/*print("your username or password may be incorrect\n")
getch();
system("clear");*/
goto sos;
}




fclose(fp);
}
