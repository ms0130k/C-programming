//#include <stdio.h>
//
//int main(void)
//{
//	int x = 10;
//
//	printf("%d\n", x * 10); // int * double -> %d (출력 불가)
//	printf("%d\n", x * 10.0);
//	printf("%f\n", x * 10.0);
//
//	printf("%d\n", x / 10);
//	printf("%f\n", x / 10); //int / int는 int 형식이므로 %f로 출력할 수 없다.
//
//	printf("%d\n", 5 / 2); //소수점 이하가 절사되므로 사실상 정수 2를 %f로 출력하는 것이다.
//
//	printf("%f\n", 5.0 / 2); //double / int는 double 형식이다.
//
//	return 0;
//}