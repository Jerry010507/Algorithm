/*
���α׷� �̸� : ������ ���� ��ġ ã��
������ : �迹��
�й� : 202010319
�ǽ��� : 2023. 03. 30
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

	printf("ã�� ����?");
	scanf_s("%d", &key);
	for (i = 0; i < size; i++)
		if (data[i] == key) 
			printf("ã�� ���� ��ġ : %d\n", i);
	return 0;
}