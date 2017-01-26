
#include<time.h>
#define RAND_M 23
FILE* random_file()
{
FILE*fp;
int random=-1;
srand(time(NULL));
random=(rand())%RAND_M;
switch(random)
{
case 0:
fp=fopen("./type/a","r");
break;

case 1:
fp=fopen("./type/b","r");

break;

case 2:
fp=fopen("./type/c","r");

break;

case 3:
fp=fopen("./type/e","r");

break;

case 4:
fp=fopen("./type/f","r");
break;

case 5:
fp=fopen("./type/g","r");
break;

case 6:
fp=fopen("./type/h","r");
break;

case 7:
fp=fopen("./type/i","r");
break;

case 8:
fp=fopen("./type/j","r");
break;

case 9:
fp=fopen("./type/k","r");
break;


case 10:
fp=fopen("./type/l","r");
break;

case 11:
fp=fopen("./type/m","r");
break;

case 12:
fp=fopen("./type/n","r");
break;

case 13:
fp=fopen("./type/o","r");
break;

case 14:
fp=fopen("./type/p","r");
break;

case 15:
fp=fopen("./type/q","r");
break;

case 16:
fp=fopen("./type/r","r");
break;

case 17:
fp=fopen("./type/s","r");
break;

case 18:
fp=fopen("./type/t","r");
break;

case 19:
fp=fopen("./type/u","r");
break;

case 20:
fp=fopen("./type/v","r");
break;

case 21:
fp=fopen("./type/w","r");
break;

case 22:
fp=fopen("./type/x","r");
break;


}
return fp;
}
