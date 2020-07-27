#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//查到个字符串常量某字符出现次数
	//利用地址来查询
	int *p="11abcd111222abcd333abcd4444abcd333222abcd"
	
	int i=0;//这里i的作用是啥？ 既然要有个某字符串出现次数
	//这里就要有个计算出现次数的变量啊 后面的i++ 
	char *temp=NULL;
	while(1){
	
	//循环的作用是去循环查找匹配的字符串
	//如果找到，返回匹配字符串的地址，没有找到返回空 
	tem=strstr(p,"abcd");
	//那怎么算没有找到呢
	if(tmp=NULL) //没有找到
	{
	break;//跳出循环 
	} 
	else//找到
	 
	 i++
	 //然后这里还需要重新设置我寻找的起点 怎么设置呢？
	 //p就需要跳过你第一次出现abcd的字符串
	 //重新设置寻扎的起点
	 p=tmp+strlen("abcd");
	
	}
	} 
	printf("%s出现的次数为:%d\n",i);
	return 0;
