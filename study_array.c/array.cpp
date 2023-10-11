#include <stdio.h>
#define SIZE 5

int get_array_sum(int *p, int size);

int main() {
	int data[] = {1, 3 ,5, 7, 9};
	int* p;
	p = data;
	get_array_sum(p, SIZE);
	return 0;
}

int get_array_sum(int *p, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n" , *(p + size -1 - i));
	}
	return 0;
}
