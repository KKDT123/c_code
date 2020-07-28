#include<stdio.h>
//别忘了调用string  头文件
#include<string.h>
int main(){

int a[10];
	
	memset(a, 0, sizeof(a));
	//将s的内存区域的前n个字节以参数c填入
	// 填充的字符，c虽然参数为int,但必须是
	// unsigned char 范围为0～255
	memset(a, 97, sizeof(a));
	int i = 0;
	for (i = 0; i < 10; i++)
	{	//记住这里打印的时候请以%c字符打印
		printf("%c\n", a[i]);
	}




}
