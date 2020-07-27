#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf[]="hello";
	char *p=buf;
	*p='a';
	printf("%s",buf);
	return 0;
}
