#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int old;
	printf(" 당신의 나이를 입력하세요 : ");
	scanf("%d", &old);

	int bornyear;
	bornyear = (2021 - old) + 1;
    printf("당신은 %d년에 태어났습니다.", bornyear);
	return 0;
}
