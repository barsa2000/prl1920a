#include <stdio.h>

int main(){
    int in;
    scanf("%d", &in);
	while(in >0) {
		for(int i = 0; i < in; i++) putchar('*');
		putchar('\n');
		in -= 2;
	}
    return 0;
}