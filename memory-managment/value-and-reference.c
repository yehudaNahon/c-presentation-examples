#include <stdio.h>

void swap(int obj1, int obj2) {
	int temp = obj1;
	obj1 = obj2;
	obj2 = temp;
}

void real_swap(int* obj1, int* obj2) 
{
	int temp = *obj1;
	*obj1 = *obj2;
	*obj2 = temp;
}

int main() 
{
	int a = 100, b = 200;
	printf("a:%d b:%d\n", a, b);
	
    swap(a,b);
	
    printf("a:%d b:%d\n", a, b);

    real_swap(&a,&b);
	
    printf("a:%d b:%d\n", a, b);

	return 0;
}