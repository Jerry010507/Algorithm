// Euclid ����.c : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <stdio.h>

int euclid(int a, int b) // �Ű�����
{

    //1. If(b = 0) return a // �������� of ���ȣ��!
    if (b == 0) return a;

    //  2. return Euclid(b, a mod b)
    return euclid(b, a % b);

}

int test1_euclid()
{
    int gcd = 0; // gcd �� = 0

    gcd = euclid(34, 48); //�ӽú��� ����
    printf("Hello World! %d\n", gcd); // gcd ��, �� 0 ���

    return 0;
}


int main(int argc, char* argv[]) //���� ����?
{
    test1_euclid();
}