#include<stdio.h>


int main()
{
	//怎么会犯在这么初级的错误呢，你的主函数int main()去哪里了
	
	int c=0;
	printf("before c= %d\n",c);

//左边为真，右边不执行
//1. ||优先级高于=
//先算1 || c结果为真 1
//1= 250 常量不能修改 //报错
//改成  1 ||（c=250）
	1 || c=250;
	//printf("after c= %d\n",c);
	
	return 0;
}
