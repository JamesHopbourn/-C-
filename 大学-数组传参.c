#include <stdio.h>
#define N 3

// 注意这里的数组不要填写长度
int add(int a[],int length);
void print(int *p);

int main(int argc, char const *argv[]){
	int b[N] = {1,3,4},result;

	// 注意传数组参数只要传数组名，不要长度
	result = add(b,N);
	printf("%d\n", result);

	// 数组长度除了直接定义之外还可以用 sizeof()
	result = add(b,sizeof(b)/sizeof(b[0]));
	printf("%d\n", result);

	// 传数组实际上是传数组地址
	print(b);
	int *p = b;
	result = add(p,sizeof(b)/sizeof(b[0]));
	printf("%d\n", result);
	return 0;
}

int add(int a[],int length){
	int sum = 0;
	for (int i = 0; i < length; i++){
		sum += a[i];
	}
	return sum;
}

void print(int *p){
	printf("%x\n", p);
}