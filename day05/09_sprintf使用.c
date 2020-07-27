#include<stdio.h>
int main(){

int a=10;
char c='x';
char buf[]="hello";
//原本是怎么输出的，将格式化一个个字符串，把这个字符串输出到屏幕
printf("%d ,%c ,%s \n",a,c,buf);

//现在我们要怎么输出，格式化一个字符串，把这个字符串输出到（保存在）指定的数组 用sprintf
char dst[100];
sprintf(dst,"%d ,%c ,%s \n",a,c,buf);
printf("x%sx",dst);

return 0;
}
