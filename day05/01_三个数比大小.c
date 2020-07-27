#include<stdio.h>
int main(){

	//思路比较三个值不会，比较两个值我会
	
	int a=10;
	int b=20;
	int c=30;
	
	//还要定义一个变量保存最大值
	int max;
	if(a>b)
	{
	max=a;
//	printf("%d",max);
	}
	else{
	
	max=b;
	
	}	
	//找到最大值后 在跟c比较
	
	if(max>c){
	
	max=max;
	}
	else{
	
	max=c;
	
	}

	        printf("%d",max);

	return 0;
}
