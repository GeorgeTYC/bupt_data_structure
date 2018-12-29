#include<stdio.h>
#define N 100
main()
{int year,mon,day;
while(scanf("%d/%d/%d",&year,&mon,&day));

{
switch(mon)
{case 1:
        printf("%d",day);
        break;
 case 2:
 	    
 	     printf("%d",day+31);
	     break;
case 3:
	    {if(year/4==0&&year/100!=0)
	     printf("%d",day+60);
	     else printf("%d",day+59);
		}
		break;
 case 4:
 	   {if(year/4==0&&year/100!=0)
	     printf("%d",day+91);
	     else printf("%d",day+90);
		}
		break;
 case 5: {if(year/4==0&&year/100!=0)
	     printf("%d",day+121);
	     else printf("%d",day+120);
		}
		break;
 case 6: {if(year/4==0&&year/100!=0)
	     printf("%d",day+152);
	     else printf("%d",day+151);
		}
		break;
 case 7: {if(year/4==0&&year/100!=0)
	     printf("%d",day+182);
	     else printf("%d",day+181);
		}
		break;
case 8: {if(year/4==0&&year/100!=0)
	     printf("%d",day+213);
	     else printf("%d",day+212);
		}
		break;
 case 9: {if(year/4==0&&year/100!=0)
	     printf("%d",day+244);
	     else printf("%d",day+243);
		}
		break;
 case 10:{if(year/4==0&&year/100!=0)
	     printf("%d",day+274);
	     else printf("%d",day+273);
		}
		break;
 case 11:{if(year/4==0&&year/100!=0)
	     printf("%d",day+305);
	     else printf("%d",day+304);
		}
		break;
 case 12:{if(year/4==0&&year/100!=0)
	     printf("%d",day+335);
	     else printf("%d",day+334);
		}
		break; 

 }}}

