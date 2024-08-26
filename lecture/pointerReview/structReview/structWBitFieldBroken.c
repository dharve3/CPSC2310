#include <stdio.h>
struct date {
	int d : 5;
	int m : 4;
	int y; 
}; 

int main() 
{ 
	// integer overflow
	struct date dt = { 31, 12, 2020 }; 
	printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y); 
	printf("%lu", sizeof(struct date));
	return 0; 
}
