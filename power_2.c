#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc<=1)
	{
		printf("please enter the argument\n");
		return 0;
	}
		
	if(argc==2)
	{
	int a=atoi(argv[1]);
	if((a&(a-1))==0)
	{
		printf("its power of 2\n");
		printf("2^%d = %d\n",a/2,a);
	}
	
        }
	else
	{
		printf("please enter the argument\n");
	}
 return 0;	
}
