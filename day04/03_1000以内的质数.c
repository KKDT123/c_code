//目标找到1000以内的偶数
#include<stdio.h>
/*int main(){


int i;

for(i=0;i<1000;i++)
{

if(i%2==0){
//i%2=0;
printf("%d\n",i);

}

}

//难道是因为忘记加return 0?
return 0;

}*/
//目标找到1000以内的质数
//质数是啥？如何找？
//两个判断思路方法： 思路1 判断一个整数是否是素数，只需要把m
//被2到m-1之间的每一个整数去除即可，如果都不能被整除，那么m就是一个素数
//简化版本思路 判断从2到根号m中即可
#include<stdio.h>
int main(){


int i;
int k;
for(k=3;k<1000;k++)
{

	//注意 这里绝对不是i<1000
	//这块改过应该是i<k
for(i=2;i<k;i++)
{

if(k%i==0){
//i%2=0;
printf("%d\n",k);

}
}
}

//难道是因为忘记加return 0?
return 0;




}                 
