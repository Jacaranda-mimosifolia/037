#include<stdio.h>
int main()
{
	int i=0;
	static int a[5]; 
	a[0]=1,a[3]=3;
	do{
		printf("a[%d]=%d\n",i,a[i]);
		i++;
	}while(i<=5);
}
//改变a[5]中的元素，a[0]=1,a[3]=3 
