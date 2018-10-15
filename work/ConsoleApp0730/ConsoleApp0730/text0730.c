/*
#include<stdio.h>

		int main(void) {

			int i = 0, sum = 0, cnt;

			for (cnt = 0; cnt < 10; cnt++) {
				i = i + 1;
				sum = sum + i;
				printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
				}
				printf("------------반복문 종료-------------\n");
				printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);

				system("pause");
	
			return 0;
}
*/

/*
#include<stdio.h>

		int main(void) {

			int  i = 2, cnt = 3;
			int sum = i + cnt;


			printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);

			system("pause");
			return 0;
}
*/

/*
#include<stdio.h>
//#define NUM 10 기호형 상수 메크로로 작용 
	int main(void) {

		int i = 0, sum = 0, cnt;
		int ch00 = 65;   // 0100 0001 A
		int ch01 = 97;  // 0110 0001 a
		int ch02 = 49;  // 0011 00001 1
		int ch05 = 254;

		printf("10진수 ch00=%d\n", ch05);
		printf("16진수 ch00=%x\n", ch05);
		printf("16진수 ch00=%X\n", ch05);
		printf("16진수 ch00=%#x\n", ch05);
		printf("16진수 ch00=%#X\n", ch05);
		printf("8진수 ch00=%#o\n", ch05);

		printf("char ch00=%c\n", ch05);


		system("pause");

		return 0;
}
*/

/*
#include<stdio.h>
//#define NUM 10 기호형 상수 메크로로 작용 

	int main(void) {

		int cnt;


		for (cnt = 1; cnt <= 10; cnt++) {
			printf("안녕하세요 cnt=%d\n", cnt);
		}
		printf("------------반복문 종료-------------\n");
		printf("cnt=%d\n", cnt);
		printf("-------------------------\n");

		for (cnt = 0; cnt < 10; cnt++) {
			printf("안녕하세요 cnt=%d\n", cnt);
		}
		printf("------------반복문 종료-------------\n");
		printf("cnt=%d\n", cnt);
		printf("-------------------------\n");

		for (cnt =1; cnt != 11; cnt++) {
			printf("안녕하세요 cnt=%d\n", cnt);
		}
		printf("------------반복문 종료-------------\n");
		printf("cnt=%d\n", cnt);
		printf("-------------------------\n");

		for (cnt = 0; cnt != 10; cnt++) {
			printf("안녕하세요 cnt=%d\n", cnt);
		}
		printf("------------반복문 종료-------------\n");
		printf("cnt=%d\n", cnt);
		printf("-------------------------\n");

		for (cnt = 10; cnt >= 1; cnt--) {
			printf("안녕하세요 cnt=%d\n", cnt);
		}
		printf("------------반복문 종료-------------\n");
		printf("cnt=%d\n", cnt);
		printf("-------------------------\n");

		for (cnt = 10; cnt != 0; cnt--) {
			printf("안녕하세요 cnt=%d\n", cnt);
		}
		printf("------------반복문 종료-------------\n");
		printf("cnt=%d\n", cnt);
		printf("-------------------------\n");

	system("pause");

	return 0;
}
*/

/*
#include<stdio.h>
//#define NUM 10 기호형 상수 메크로로 작용 

		int main(void) {
			//printf("1-1 sum=7+7+7+...+7 10항 까지의 합 \n")
			int cnt, sum=0;
			for (cnt = 1; cnt <= 10; cnt++) {
				sum = sum + 7;
				printf("cnt=%2d, \t sum=%3d\n", cnt,sum);
			}
			printf("------------반복문 종료-------------\n");
			printf("cnt=%d\n, sum = %d\n", cnt,sum);
			printf("-------------------------\n");

			system("pause");

			return 0;

}
*/

/*
#include<stdio.h>
//#define NUM 10 기호형 상수 메크로로 작용 

		int main(void) {

			//printf("1-2 sum=1+2+3+4+...+NUM NUM항까지의 합")
			int cnt, sum = 0, i = 0;
			for (cnt = 1; cnt <= 10; cnt++) {
				i = i + 1;
				sum = sum + i;
				printf("cnt=%2d, sum=%2d , i=%3d\n", cnt, sum, i);
			}
	
			printf("------------반복문 종료-------------\n");
			printf("cnt=%d\n, sum = %d\n", cnt, sum);
			printf("-------------------------\n");

			system("pause");

			return 0;

}
*/



//#include<stdio.h>
////#define NUM 10 기호형 상수 메크로로 작용 
//
//		int main(void) {
//
//		//printf("1-2 sum=1+2+3+4+...+NUM NUM항까지의 합")
//			int cnt, sum = 0, i = 1;
//			for (cnt = 1; cnt <= 10; cnt++) {
//				//1-1 sum = sum + 7;
//
//				sum = sum + i;
//				printf("cnt=%2d, sum=%2d , i=%3d\n", cnt, sum, i);
//				i = i + 1;
//			}
//			system("pause");
//
//			return 0;
//
//}


/*
#include<stdio.h>
//#define NUM 10 기호형 상수 메크로로 작용 

		int main(void) {
			//printf("1-3sum=1+3+5+7+..+ 10항 까지의 합 \n")
			int cnt, sum = 0, i=-1;
			for (cnt = 1; cnt <= 10; cnt++) {
				i = i+2;
				sum = sum + i;
				printf("cnt=%2d, i=%3d, sum=%2d\n", cnt, i, sum);
			}
			printf("------------반복문 종료-------------\n");
			printf("cnt=%d\n, sum = %d\n", cnt, sum);
			printf("-------------------------\n");

			system("pause");

			return 0;

}
*/


//#include<stdio.h>
//#define num 10 // 10 기호형 상수 메크로로 작용 
//
//		int main(void) {
//			//printf("1-3sum=2+4+6+8+..+ 10항 까지의 합 \n")
//			int cnt, sum = 0, i=0 ;
//			float avg;
//
//			for (cnt = 1; cnt <= num; cnt++) {
//				i = i + 2;
//				sum = sum + i;
//				printf("cnt=%2d, i=%3d, sum=%2d\n", cnt, i, sum);
//			}
//
//			printf("------------반복문 종료-------------\n");
//			printf("cnt=%2d, i=%3d, sum=%3d\n", cnt, i, sum);
//			avg = (float)sum / num;
//			printf("avg=%.2f\n", avg);
//			printf("-------------------------\n");
//
//			system("pause");
//
//			return 0;
//
//		}
		


//#include<stdio.h>
//#define NUM 10 // 10 기호형 상수 메크로로 작용 
//
//		int main(void) {
//			//printf("1-3sum=1+3+5+7+..+ 10항 까지의 합 \n")
//			int cnt, sum = 0, i =0;
//			float avg;
//
//			for (cnt = 1; cnt <= NUM; cnt++) {
//				i = i + 1;
//				sum = sum + i;
//				printf("cnt=%2d, i=%3d, sum=%2d\n", cnt, i, sum);
//			}
//
//			printf("------------반복문 종료-------------\n");
//			printf("cnt=%2d, i=%3d, sum=%3d\n", cnt, i, sum);
//			avg = (float)sum / NUM;
//			printf("avg=%.2f\n", avg);   //  %0.2f 뜻 : 소수점 두번째자리까지 표현 ㄴ
//			printf("-------------------------\n");
//
//			system("pause");
//
//			return 0;
//
//		}
//		
//
