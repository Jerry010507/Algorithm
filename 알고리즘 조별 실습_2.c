/*
프로그램 이름 : 임의의 수의 위치 찾기
개발자 : 김예은
학번 : 202010319
실습일 : 2023. 03. 30
*/

#include <stdio.h>

int main(void)
{
	int data[] = { 55, 43, 98, 3, 73, 87, 59, 18 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d", data[i]);
	printf("\n");

	printf("찾을 숫자?");
	scanf_s("%d", &key);
	for (i = 0; i < size; i++)
		if (data[i] == key) 
			printf("찾은 수의 위치 : %d\n", i);
	return 0;
}