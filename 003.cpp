#include<stdio.h>
int main()
{
	int a;
	for(int i=0;i<5;i++)
	{
		printf("�������ͬѧ�ɼ�:");
		scanf("%d",&a);
		getchar();
		switch(a/10)
		{
			case 9:printf("A\n");break;
			case 8:printf("B\n");break;
			case 7:printf("C\n");break;
			case 6:printf("D\n");break;
			default:printf("����������\n"); 
		}
	} 
}
