#include<stdio.h>
int main(){

//先定义一个长度为10的数组
int a[10];
int i; //这个i是数组下标？
for(i=0;i<10;i++){

scanf("%d",&a[i]);
}
//这里要注意 想输出数组里的数 一定要是循环一个个输出
for(i=0;i<10;i++){
	printf("%d,",a[i]);}
return 0;
}
