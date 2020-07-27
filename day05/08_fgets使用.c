#include<stdio.h>
int main(){

//fgets(三个参数用，隔开)
//fgets（数组名，指定长度如果是数组用sizeof,键盘标准输入stdin)
char s[10];
printf("请输入个字符串：");
fgets(s,sizeof(s),stdin);
printf("%s",s);





return 0;
}
