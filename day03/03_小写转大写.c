#include<stdio.h>
int main(){
	printf("请输入一个小写字母\n");
	//小写转大写，减32
	
	int a;
	scanf("%c",&a);
//这里报错原因？
//这里报错原因，取地址符号应该是这么&a
//c语言中所有都是符号在前
	a=a-32;
	printf("%c\n",a);
	//开心 第一个独立完成的c语言大小写转换程序
	//可以优化一下 比如输入的时候加个换行符\n
	return 0;
}
	//这里功能可以说还不够完善，留一个问题
	//如何用for循环来实现重复输入的问题
	
