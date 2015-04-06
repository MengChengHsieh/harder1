#include<stdio.h>

void change(int *addr_num, int val){
	
	/* using * operator to dereference */
	*addr_num = val;
	printf("in function , address of number : %p\n",
			addr_num);
}

int main(){
	
	int number = 10;
	printf("%p\n", &number);
	change( &number, 24);


	printf("After change func. number : %d\n", number);
	return 0;
}
