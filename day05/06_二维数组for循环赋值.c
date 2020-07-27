#include<stdio.h>
int main(){
int a[4][3];
int i,j;//二维数组变量
//定义一个4行3列的数组
int num=0;//为数组初始化赋值
for(i=0;i<4;i++){

for(j=0;j<3;j++)
{
	a[i][j]=num;
	num++;
}
}
printf("%d",a[1][2]);

return 0;



}
