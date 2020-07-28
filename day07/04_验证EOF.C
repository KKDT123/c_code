#include<stdio.h>
int main(){
printf("请输入字符：");
int c;
c=getchar();
while(c!=EOF){
//输出你得到的chaar
putchar(c);
//这里继续/getchar直到你输入eof的值
c=getchar();
}

return 0;

}
