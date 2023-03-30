/*
프로그램 이름 : 최대 숫자 찾기 
개발자 : 김예은
학번 : 202010319
실습일 : 2023. 03. 30
*/

#include <stdio.h>

int main() {
	int data[] = { 9, 5, 3, 15, 8, 7, 4, 6, 2 };
	int size = sizeof(data) / sizeof(data[0]);
	int max;

	for (int i = 0; i < size; i += 3) { // 배열을 세 개씩 묶어서 반복
		max = data[i]; // 첫 번째 요소를 최댓값으로 설정
		for (int j = i + 1; j < i + 3; j++) { // 나머지 두 개의 요소를 비교
			if (data[j] > max) {
				max = data[j];
			}
		}
		printf("%d", max); // 각 그룹의 최댓값 출력
	}

	return 0;
}