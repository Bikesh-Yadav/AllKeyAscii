#include<conio.h>
#include<stdio.h>

int main()
{
	int ch1,ch2,re;
	printf("press a key to continue\n");
	ch1=getch();
	ch2=0;
	if(ch1==0xE0)//a scroll key was pressed
	{
		ch2=getch();
		//determine what it was
		switch(ch2)
		{
			case 72:printf("up was pressed\n");break;
			case 80:printf("down was pressed\n");break;
			case 75:printf("left was pressed\n");break;
			case 77:printf("right was pressed\n");break;
			//set also loke home,end,pgup...
			default:
				printf("some other was pressed:%d%d\n",ch1,ch2);break;			
		};
		
	}
	else
	printf("key pressed:%d %c\n",ch1,ch2);
	
	//system("pause");
	printf("print 1 to continue\n");
	scanf("%d",&re);
	if(re==1)
	{
		return main();
	}
	
	
}
