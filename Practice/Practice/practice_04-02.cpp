#include <stdio.h>

int main(void)
{
	int nSeconds = 0;
	int nMinutes = 0;
	int nHours = 0;

	scanf("%d", &nSeconds);

	nHours = nSeconds / 60 / 60;
	nMinutes = nSeconds / 60 % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", nSeconds, nHours, nMinutes, nSeconds % 60);

	return 0;
}