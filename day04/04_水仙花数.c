#include<stdio.h>
int main(){

//什么是水仙花数，一个数==它各位的立方和 153==111+555+333
//for 循环 求余 取整 这一部是在求出它的个位 十位 百位
	int a;
      	int b;
	int c;
	int d;
	printf("请输入一个1000以内数字：");

	scanf("%d",&a);
	 
 //	for(a=0;a<1000;a++){
 //     为什么这里报错的原因就是for循环是遍历 而你sanf是输入 遍历就是自己求1000以内所有的水仙花数
	//个位
	b=a%10;
	//十位
	c=(a%100)/10;
	//百位
	d=a/100;
	if(a == b*b*b+c*c*c+d*d*d){

		printf("这是一个水仙花数，其值等于它各位平方和");
	
	
	}
	else{
	
	printf("这不是水仙花数");
	}
	return 0;
	
	//}




}
