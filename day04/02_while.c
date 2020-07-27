#include<stdio.h>
int main(){

	int num=0;
	int s=0;
	while(num<100){
	//这里为什么会不停打印1这样
	//因为这里的while跟if一样 就是if的地方换成了while 
	//判断num<100的条件 如果为真 执行{}语句  如果为假 跳出while()循环
	//2.执行完{}语句，重复1步骤
		
	//num=num++;
	//这里不能num=num++因为这里会有一个问题 你这样运行程序过后 还是不停输出1
	 num=++num;
	//想要实现输出1～100以内的数 就直接设置初始值为0
	printf("%d\n",num);
	s=num+s;
	printf("%d\n",s);
	}


//非常完美 实现了100以内的求和 虽然这本来就是大一就该能手写出来的代码 但是现在好歹也算独立完成了





	return 0;
}
