#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int old;
	printf(" ����� ���̸� �Է��ϼ��� : ");
	scanf("%d", &old);

	int bornyear;
	bornyear = (2021 - old) + 1;
    printf("����� %d�⿡ �¾���ϴ�.", bornyear);
	return 0;
}
