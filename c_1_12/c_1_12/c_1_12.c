#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char name[20];
	int age[20];
	char sex[2];
	char id[20];
}
int main()
{
	struct stu p={"仲",25,"男","190350324"};
	printf("姓名：%s\n",p.name);
	printf("学号：%s\n",p.id);
}
	/*struct student* ps=&p;
	printf("性别：%s\n",ps->sex);*/

//int main()
//{
// char ch = 'w';
// char* pc = &ch;
// *pc = 'q';
// printf("%c\n", ch);
//    return 0;//}
//int main()
//{
//	int a=9;
//	int* p=&a;
//	*p=20;
//	printf("a的值为%d\n",*p);
//	printf("a的值为%d\n",a);
//	printf("a的地址为%p\n",p);
//}
//void test()
//{
//	static int i=0;
//	i++;
//	printf("%d ",i);
//
//}
//int main()
//{
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		test();
//	}
//	return 0;
//}
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a=8;
//	u_int b=6;
//	printf("%d %d\n",a,b);
//	return 0;
//
//
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,};
//	int i=0;
//	for(i=0;i<9;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int Add(int x,int y)
//{
//	int	z=x+y;
//
//	return z;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d",&a,&b);
//	c=Add(a,b);
//	printf("两者相加等于%d\n",c);
//	return 0;
//}