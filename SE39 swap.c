#include <stdio.h>

void swap(int x,int y);
void array_swap(int x[],int y[]);
void pointer_swap(int *x,int *y);

int main(int argc, char const *argv[]){
	int a=10,b=20;
	int *pa=&a, *pb=&b;
	
	printf("\n");
	printf("原始数值 a:%d b:%d\n", a, b);
	printf("指针数值 *pa:%d *pb:%d\n", *pa, *pb);
	printf("指针地址 *pa = %p *pb = %p\n", pa, pb);
	printf("地址相减 %ld 实体单位\n", pa- pb);
	printf("\n");

	swap(a,b);
	printf("初换数值 a:%d b:%d\n", a, b);
	pointer_swap(pa,pb);
	printf("再换数值 a:%d b:%d\n", a, b);

	printf("\n");
	int c[1] = {10},d[1] = {20};
	printf("原始数值：a[1] = %d,b[1] = %d\n", c[0],d[0]);
	array_swap(c,d);
	// 注意不是 array_swap(c[0],d[0]);
	printf("初换数值：a[1] = %d,b[1] = %d\n", c[0],d[0]);

	printf("\n");
	int *p_array,f[12]={1,2,3,4,5};
	for (p_array=f; *p_array<5; p_array++)
		printf("%d ", *p_array);
}

void swap(int x,int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void array_swap(int x[],int y[]){
	int temp;
	temp = x[0];
	x[0] = y[0];
	y[0] = temp;
}

void pointer_swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
