#include <stdio.h>

//int main(void)
//{
	/*1) getchar() 함수를 호출하여 사용자로부터 영문 네 글자 이상을 입력받고, 그 중에서 두 번째 글자만 화면에 출력하려고 합니다. 다음 입출력 예를 보고 같은 결과를 얻을 수 있도록 프로그램을 작성합니다.
		입력: Test
		출력: e*/
	/*char test = 0;
	getchar();
	test = getchar();

	printf("%c\n", test);*/

	/*2) getchar() 함수와 _getch() 함수가 내부적으로 다른 점은 무엇인지 기술하세요.
		버퍼 사용 여부*/

	/*3) gets() 함수는 보안 결함이 있습니다. 이 함수를 대체할 수 있는 함수에는 어떤 것이 있는지 기술하세요.
		gets_s()*/

	/*4) 만일 부호가 있는 10진 정수 형식으로 표현할 수 있는 가장 큰 양수 범위를 1넘어서면 컴퓨터는 이를 어떤 숫자로 인식하는지 기술하세요.
		가장 작은 음수*/

	/*5) 부호가 없는 10진 정수 형식과 부호가 있는 10진 정수 형식을 출력하기에 적절한 형식 문자는 각각 무엇인지 답하세요.
		%u %d*/

	/*6) 123.45의 자료형은 무엇이며 이 값을 출력하기에 가장 적절한 형식 문자는 무엇인지 답하세요.
		float, double, %g*/

	/*7) 형식 문자 '%012.3F'가 의미하는 것은 무엇인지 기술하세요.
		소수점 포함 12자리까지 표현, 소수점 아래 3자리까지 표현하되 없는 자리는 0으로 대체*/
	/*printf("%012.3F\n", 2.4);
	printf("%12.3F\n", 2.4);
	printf("%-12.3F\n", 2.4);
	printf("%012.3f\n", 2.4);
	printf("%12.3f\n", 2.4);
	printf("%-12.3f\n", 2.4);*/

	/*8) 배열에 담긴 문자열을 출력하려 합니다. 적절한 형식 문자는 무엇인지 답하세요.*/
	/*char str[32] = { "test string" };
	printf("8번문제 : %s\n", str);*/

	/*9) scanf() 함수로 정수를 입력받은 후, 입력 버퍼에 남은 개행문자를 제거하려 합니다.어떤 방법이 있는지 모두 기술하세요.
		getchar(), fflush(stdio), printf("%d%*c", var);*/

	/*10) 만일 nInput이 정수형 변수라면 다음 코드는 무엇이 잘못되었는지 기술하세요.
		scanf("%d", nInput);*/
	/*int nInput = 0;
	scanf("%d", &nInput);
	printf("%d", nInput);*/

	/*11) scanf() 함수로 double형 실수를 입력받으려 합니다. 적절한 형식 문자는 무엇인지 답하세요.*/
	//double dInput = 0;
	//scanf("%lf", &dInput);//scanf("%f", &dInput);
	//printf("%.3f\n", dInput);
	
//	return 0;
//}