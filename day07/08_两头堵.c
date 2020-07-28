#include<stdio.h>
#include<string.h>
int main(){

//两头堵模型就是 一个字符串两头有空格 求其中的字符串数
//定义一个字符串常量
char *p="       123456789     ";
char *start=p;//首元素地址
char *end=p+strlen(p)-1; //这里为什么要减1
	//比如 12345 你从1 开始到5 节结束 你最后5
	//的地址是4 因为你是从0开始算起的阿

//这里就用到条件语句
//从左往右
while(*start==' '&& *start!='\0'){

start++;

}
//从右往左
while(*end==' '&&end !=p){ //不等于p 等于p不就到头了
	end--;


}
//元素个数 
int n=end-start+1;
printf("n=%d",n);
//如何求到元素个数 并且将元素拷贝
char buf[]="aaaaaaaaaaa";
strncpy(buf,start,n)//这里为什么要用strncpy ，因为这里你要指定n 个数去拷贝 
//但是在这里如果你想只拷贝你需要拷的
//你需要自己加\0 因为后面的都是空格
buf[n]=0;//结束符
printf("buf=%s\n",buf);
return 0;
}
