// Euclid 연습.c : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int euclid(int a, int b) // 매개변수
{

    //1. If(b = 0) return a // 종료조건 of 재귀호출!
    if (b == 0) return a;

    //  2. return Euclid(b, a mod b)
    return euclid(b, a % b);

}

int test1_euclid()
{
    int gcd = 0; // gcd 값 = 0

    gcd = euclid(34, 48); //임시변수 지정
    printf("Hello World! %d\n", gcd); // gcd 값, 즉 0 출력

    return 0;
}


int main(int argc, char* argv[]) //순서 제어?
{
    test1_euclid();
}