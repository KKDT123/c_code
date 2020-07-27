#include<stdio.h>
int main(){
int a[10];
int i;
printf("请输入十个数：");
for(i=0;i<10;i++){

	scanf("%d",&a[i]);
//	printf("排序前十个数：");
	printf("%d\n",a[i]);
	        printf("排序前十个数\n");

}
//冒泡排序
//定义一个中间变量 定一个内部交换次数变量
int j;
int tem;
//外部循环次数
for(i=0;i<9;i++){
  for(j=0;j<9-i;j++)
  {
  if(a[j]>a[j+1]){
  
  tem=a[j];
  a[j]=a[j+1];

  }
  
  }

printf("排序后");
for


}

return 0;
}
