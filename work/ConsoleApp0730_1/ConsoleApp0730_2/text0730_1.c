/*
#include<stdio.h>
#define NUM 10 //기호형 상수 메크로로 작용 

int main(void) {

	//1-1
	int cnt, sum = 0, i = 0;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		sum = sum + i;
		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum );
	}

	printf("------------반복문 종료-------------\n");
	
	system("pause");

	return 0;

}
*/


/*
#include<stdio.h>
#define NUM 10 //기호형 상수 메크로로 작용 

int main(void) {

	//1-1
	int cnt, sum = 2, i = -1;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		sum = sum + i;
		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
	}

	printf("------------반복문 종료-------------\n");

	system("pause");

	return 0;
}
*/

/*
#include<stdio.h>
#define NUM 10 //기호형 상수 메크로로 작용 

int main(void) {

	//1-1
	int cnt , sum =2, i = -2;
	for (cnt = 0; cnt <= 10; cnt++) {
		i = i +1;
		sum = sum +i;
		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
	}

	printf("------------반복문 종료-------------\n");

	system("pause");

	return 0;
}
*/

//#include<stdio.h>
//#define NUM 10 //기호형 상수 메크로로 작용 
//
//int main(void) {
//
//	//1-1
//	int cnt, sum = 2, i = 2;
//	for (cnt = 0; cnt <= 10; cnt++) {
//		i = i - 1;
//		sum =  sum - i ;
//		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

/*
#include<stdio.h>
#define NUM 10 //기호형 상수 메크로로 작용 

int main(void) {

	//1-1
	int cnt, sum = 2, i = -1;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		sum = sum + i;
		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
	}

	printf("------------반복문 종료-------------\n");

	system("pause");

	return 0;
}
*/

/*
#include<stdio.h>
#define NUM 10 //기호형 상수 메크로로 작용 

int main(void) {

	//sum=1/2+2/3+3/4+...+(NUM-1)/NUM
	int cnt,i = 0;
	float sum = 0, avg;
	for (cnt = 1; cnt < NUM; cnt++) {
		i = i+1;
		sum = sum + (float)i/(i+1);
		printf("cnt=%2d , i=%3d , sum=%.2f\n", cnt, i, sum);
	}

	printf("------------반복문 종료-------------\n");

	system("pause");

	return 0;
}
*/

/*
#include<stdio.h>
#define NUM 10 //기호형 상수 메크로로 작용 

int main(void) {

	//1-1
	int cnt, i = 1;
	float sum = 0, avg;
	for (cnt = 1; cnt < NUM; cnt++) {
		i = i + 1;
		sum = sum + (i - 1) / (float)i;
		printf("cnt=%2d , i=%3d , sum=%.2f\n", cnt, i, sum);
	}

	printf("------------반복문 종료-------------\n");

	system("pause");

	return 0;
}
*/
