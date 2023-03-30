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

	size = sizeof(data) / sizeof(data[0]); // 배열의 크기 계산
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d", data[i]); // 배열 요소 출력
	printf("\n");

	printf("찾을 숫자?");
	scanf_s("%d", &key); // 찾을 숫자 입력 받기
	for (i = 0; i < size; i++)
		if (data[i] == key) 
			printf("찾은 수의 위치 : %d\n", i + 1); // 찾은 수의 위치 출력 (인덱스 값에서 1을 더해줌)
	return 0;
}