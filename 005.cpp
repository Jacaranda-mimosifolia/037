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
//�ı�a[5]�е�Ԫ�أ�a[0]=1,a[3]=3 
