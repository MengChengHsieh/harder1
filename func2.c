#include<stdio.h>


void change( double *addr_num , double val){
	
	// print out the value of pointer to double 
	printf("%p\n", addr_num);
	*addr_num = val;
	return;
}


int main(){
	
	double d_num = 14.4;
	//print the address of d_num
	printf("%p\n", &d_num);
	change( &d_num , 1324.323);

	//print the value of d_num
	printf("%lf\n" ,d_num );

	return 0;
}
