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

	size = sizeof(data) / sizeof(data[0]); // �迭�� ũ�� ���
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d", data[i]); // �迭 ��� ���
	printf("\n");

	printf("ã�� ����?");
	scanf_s("%d", &key); // ã�� ���� �Է� �ޱ�
	for (i = 0; i < size; i++)
		if (data[i] == key) 
			printf("ã�� ���� ��ġ : %d\n", i + 1); // ã�� ���� ��ġ ��� (�ε��� ������ 1�� ������)
	return 0;
}