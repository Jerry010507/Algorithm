/*
���α׷� �̸� : �ִ� ���� ã�� 
������ : �迹��
�й� : 202010319
�ǽ��� : 2023. 03. 30
*/

#include <stdio.h>

int main() {
	int data[] = { 9, 5, 3, 15, 8, 7, 4, 6, 2 };
	int size = sizeof(data) / sizeof(data[0]);
	int max;

	for (int i = 0; i < size; i += 3) { // �迭�� �� ���� ��� �ݺ�
		max = data[i]; // ù ��° ��Ҹ� �ִ����� ����
		for (int j = i + 1; j < i + 3; j++) { // ������ �� ���� ��Ҹ� ��
			if (data[j] > max) {
				max = data[j];
			}
		}
		printf("%d", max); // �� �׷��� �ִ� ���
	}

	return 0;
}