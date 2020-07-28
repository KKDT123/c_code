#include<stdio.h>
#include<string.h>
int main(){
int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[10];
	
	memcpy(b, a, sizeof(a));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", b[i]);
	}
	printf("\n");

	//memcpy(&a[3], a, 5 * sizeof(int)); //err, 内存重叠







return 0;
}
