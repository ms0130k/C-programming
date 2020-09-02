#include <stdio.h>

int main(void)
{
	int nSeconds = 0;
	int nMinutes = 0;
	int nHours = 0;

	scanf("%d", &nSeconds);

	nHours = nSeconds / 60 / 60;
	nMinutes = nSeconds / 60 % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", nSeconds, nHours, nMinutes, nSeconds % 60);

	return 0;
}