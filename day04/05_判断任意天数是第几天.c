#include<stdio.h>
int main(){

	//任意给出一个天数，判断是第几天
	//这里有一个问题就是 闰年和平常年的不同
	//闰年的算法是能被四整除 但是不能被100整除，或者能被400整除
	
	//E1
	//eg 2016 6 1  是这一年的第153tian
	

	//思路分析：用switch 语句
	int a,b,c;
	//分别代表年月日
	int total,leap;
	这里还要定义下 总天数

	printf("请输入年份：");

        scanf("%d\n",&a);

printf("请输入月份：");

        scanf("%d\n",&b);
printf("请输入天数：");

        scanf("%d\n",&c);

	//这里不是很熟悉switch语句
	switch(b)
	{
	
	case 1：//注意这里是冒号
	total =0;
//想一想 为什么这里是0？
	break;
	
		case 2:
	total =31;
	break;

case3:
	total =59;
	break
		case4:
		total=90;


	
	
	
	}
total=total+day;
//这里非常妙 关键就在于分析 当你输入某个月份时候是多少天  分析一月 你输入任意一个月份 是不是就是天数 所以一月份的total就等于0

//这里还有个妙处就是leap leap=1是因为当是闰月的时候，就直接加上即可
//还有个注意点 就是只有输入的月份大于2时才需要考虑闰年的说法

if(b>2&&(a%4==0&&a/100!==0)||(a/400)==0)

{
leap =1;

}
total =total+leap;
printf();

return 0;

}
