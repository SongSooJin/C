//#include<stdio.h>
//#define num 10
//
////sum=1/2+2/3+3/4+...+num/(num+1)
////sum=1/2+2/3+3/4+...+(num-1)/num
//
//	int main(void) {
//		//int cnt, i = 1;
//		int cnt, i = 0; 
//		float sum = 0, avg;
//
//		for (cnt = 1; cnt < num; cnt++) {
//			i = i + 1; 
//			sum = sum + (float)i / (i + 1); 
//			//sum = sum + (float)(i - 1) / i;
//			//printf("cnt=%2d ,  %2d/%2d , sum=%.2f\n", cnt, i, (i+1), sum);
//			printf("cnt=%2d ,  %2d/%2d , sum=%.2f\n", cnt, (i-1), i , sum);
//		}
//
//		printf("------------반복문 종료-------------\n");
//		printf("cnt = %2d, i = %3d, sum = %.2f\n", cnt, i, (i + 1), sum);
//		system("pause");
//
//		return 0;
//	
//}


//#include<stdio.h>
//#define NUM 10
//
////sum+2+3+5+8+12+?+...+NUM항
////   i    2  3  5  8
////   j      1  2  3
//
//	int main() {
//
//		//int cnt, sum = 2, i = -1;
//		int cnt, i=2, j=0, sum = 2;
//		for (cnt = 1; cnt < 10; cnt++) {
//			//i = i + 1;
//			j = j + 1;
//			i = i + j;
//			//sum = sum + i;
//			sum = sum+ i;
//			//printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//			printf("cnt=%2d , i=%3d ,j=%d , sum=%2d\n", cnt, i, j, sum);
//		}
//
//		printf("------------반복문 종료-------------\n");
//
//		system("pause");
//
//		return 0;
//}


//#include<stdio.h>
//#define NUM 10
//
////sum+1+2+4+7+11+?+...+NUM항
////   i    1  2  4  7
////   j      1  2  3
//
//	int main() {
//
//		//int cnt, sum = 2, i = -1;
//		int cnt, i=1, j=0, sum = 1;
//		//for (cnt = 1; cnt <= NUM; cnt++)
//		for (cnt = 1; cnt < NUM; cnt++) {
//			//i = i + 1;
//			j = j + 1;
//			i = i + j;
//			//sum = sum + i;
//			sum = sum +  i;
//			//printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//			printf("cnt=%2d , i=%3d ,j=%d , sum=%2d\n", cnt, i, j, sum);
//		}
//
//		printf("------------반복문 종료-------------\n");
//
//		system("pause");
//
//		return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum=1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...+NUM항)
////sum=1 + 3 + 6 + 10 +15 +...+NUM항
////   i    1   3   6    10
////   j      2   3   4
//
//int main() {
//
//	//int cnt, sum = 2, i = -1;
//	int cnt, i = 1, j = 1, sum = 1;
//	//for (cnt = 1; cnt <= NUM; cnt++)
//	for (cnt = 1; cnt < NUM; cnt++) {
//		//i = i + 1;
//		j = j + 1;
//		i = i + j;
//		//sum = sum + i;
//		sum = sum + i;
//		//printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//		printf("cnt=%2d , i=%3d ,j=%d , sum=%2d\n", cnt, i, j, sum);
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}


//#include<stdio.h>
//#define NUM 10
//
////sum=1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...+NUM항)
////sum=0 +1 + 3 + 6 + 10 +15 +...+NUM항
////   i    0   1   3   6    10
////   j       1   2    3   4
//
//int main() {
//
//	//int cnt, sum = 2, i = -1;
//	int cnt, i = 0, j = 0, sum = 0;
//	//for (cnt = 1; cnt <= NUM; cnt++)
//	for (cnt = 1; cnt <= NUM; cnt++) {
//		//i = i + 1;
//		j = j + 1;
//		i = i + j;
//		//sum = sum + i;
//		sum = sum + i;
//		//printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//		printf("cnt=%2d , i=%3d ,j=%d , sum=%2d\n", cnt, i, j, sum);
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum=1*1+(1*2)+(1*2*3)+(1*2*3*4)+...+(1*2*3*...*NUM항)
////sum=1! + 2! + 3! + 4! +5! +...+NUM!항
////   i    0   1   3   6    10
////   j       1   2    3   4
//
//int main() {
//
//	int cnt, f = 1, i = 0, sum = 0;
//
//	for (cnt = 1; cnt <= NUM; cnt++) {
//
//		i = i + 1;
//	    f = f * i;
//
//		sum = sum + f;
//		
//		printf("cnt=%2d , i=%3d , f=%d , sum=%2d\n", cnt, i,f, sum);
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum=1*1+(1*2)+(1*2*3)+(1*2*3*4)+...+(1*2*3*...*NUM항)
////sum=1! + 2! + 3! + 4! +5! +...+NUM!항
////   i    0   1   3   6    10
////   j       1   2    3   4
//
//int main() {
//
//	int cnt, f = 1, i = 0, sum = 0;
//
//	for (cnt = 1; cnt <= NUM; cnt++) {
//
//		i = i + 1;
//	    f = f * i;
//
//		sum = sum + f;
//		
//		printf("cnt=%2d , i=%3d , f=%d , sum=%2d\n", cnt, i,f, sum);
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum=1 + 1 + 2 + 3 + 5 + 8 + 13 + 21+...+NUM항) 피보나치 
////       a    b  pi  
////             a   b     pi
//
//int main() {
//
//	int cnt, pi = 1,a = 1, b = 1, sum = a+b;
//
//	for (cnt = 3; cnt <= NUM; cnt++) {
//
//		pi = a + b;
//		sum = sum + pi;
//		
//		printf("cnt=%2d , a=%3d , b=%d , pi=%d, sum=%2d\n", cnt, a, b,pi, sum);
//
//		a = b;
//		b = pi;
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10 
//
////피보나치 (재귀함수)
//
//	//int fib(int);
//	int main() {
//		int sum = 0, input, cnt;
//		for (cnt = 1; cnt <= NUM; cnt++) {
//			sum = sum + fib(cnt);
//			printf("cnt = %d, fact(%d)=%d ,sum=%d\n", cnt, cnt, fib(cnt), sum);
//
//		}
//		system("pause");
//
//			return 0;
//	}
//	int fib(int a) {
//		int result;
//
//		if (a <= 2) {
//			result = 1;
//		}
//		else {
//			result = (fib(a - 1) + fib(a - 2));
//		}
//		return result;
//	}

//#include <stdio.h>
//#define NUM 10
//
////팩토리얼 
//int fact(int);
//
//	int main(){
//		int sum = 0 , cnt;
//		for (cnt = 1; cnt <= NUM; cnt++) {
//		sum = sum+ fact(cnt);
//		printf("cnt = %d, fact(%d)=%d ,sum=%d\n", cnt, cnt, fact(cnt), sum);
//		
//	}
//		printf("------------반복문 종료-------------\n");
//		printf("cnt = %d, fact(%d)=%d ,sum=%d\n", cnt, cnt, fact(cnt), sum);
//
//		system("pause");
//
//		return 0;
//
//}
//	int fact(int a) {
//		int result;
//		
//		if (a > 1) {
//			result = a + fact(a-1);
//		}
//		else {
//			result = 1;
//		}
//		return result;
//			
//	}

//#include<stdio.h>
//#define NUM 10
//int main() {
//	int cnt=1, sum = 0, i = 0;
//	//for (cnt = 1; cnt <= NUM; cnt++) {
//	while (cnt < NUM) {
//		cnt++; // ++cnt  / cnt +=1 / cnt = cnt+1
//		i = i + 1;
//		sum = sum + i;
//		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//	}
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
//	int main() {
//		int i, j, k;
//
//		for (i = 2; i <= 9; i++) {
//			for (j = 1; j <= 9; j++) {
//				k = i * j;
//					printf("%d * %d= %d\n", i, j, k);
//			}
//			printf("------------------------\n");
//		}
//
//		printf("------------반복문 종료-------------\n");
//		printf("%d * %d= %d\n", i, j, k);
//	system("pause");
//		
//	return 0;
//	
//	}

//#include<stdio.h>
//#define NUM 10
//
//	int main() {
//		int i=1, j, k;
//
//		while (i <9) {
//			 i++; 
//			 j = 1;
//
//			while ( j < 9) {
//				 j++;
//				 k = i * j;
//					printf("%d * %d= %d\n", i, j, k);
//					//j++;
//			}
//			printf("------------------------\n");
//			//i++;
//		}
//
//		printf("------------반복문 종료-------------\n");
//		printf("%d * %d= %d\n", i, j, k);
//	system("pause");
//		
//	return 0;
//	
//	}

//#include<stdio.h>
//#define NUM 10
//int main() {
//	int cnt=1, sum = 0, i = 0;
//	//for (cnt = 1; cnt <= NUM; cnt++) {
//	//while (cnt < NUM) {
//AA:	 if(cnt<=NUM) {
//		
//		i = i + 1;
//		sum = sum + i;
//		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//		cnt++; // ++cnt  / cnt +=1 / cnt = cnt+1
//		goto AA;
//	}
//
//
//	printf("------------반복문 종료-------------\n");
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//int main() {
//	int cnt = 0, sum = 0, i = 0;
//	//for (cnt = 1; cnt <= NUM; cnt++) {
//	//while (cnt < NUM) {
//AA:	 if (cnt < NUM) {
//			cnt++; // ++cnt  / cnt +=1 / cnt = cnt+1
//			i = i + 1;
//			sum = sum + i;
//			printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//	
//	goto AA;
//}
//
//
//	 printf("------------반복문 종료-------------\n");
//
//	 system("pause");
//
//	 return 0;
//}

//#include<stdio.h>
//#define num 10
//
//	int main() {
//		int i=1, j, k;
//
//	AA:	if (i < 9) {
//			 i++; 
//			 j = 0;
//
//		aa:	if ( j < 9) {
//				 j++;
//				 k = i * j;
//					printf("%d * %d= %d\n", i, j, k);
//					//j++;
//					goto aa;
//			}
//			printf("------------------------\n");
//			//i++;
//			goto AA;
//		}
//		
//		printf("------------반복문 종료-------------\n");
//		printf("%d * %d= %d\n", i, j, k);
//	system("pause");
//		
//	return 0;
//	
//	}

//#include<stdio.h>
//
//int main() {
//	int i, j, k, hap, cnt=0;
//	for (i = 1; i <= 17; i++) {  //범위는 곱했을때 5000이 넘는기준
//		for (j = 1; j <= 13; j++) {
//			for (k = 1; k <= 10; k++) {
//				hap = i * 300 + j * 400 + k * 500;
//				if (hap == 5000) {
//					cnt++;
//					printf("i=%d, j=%d, k=%d, hap=%d, cnt=%d\n", i, j, k, hap,cnt);
//				}
//				
//			}
//		}
//	}
//
//	system("pause");
//		
//	return 0;
//	
//	}


//#include<stdio.h>
//
//int main() {
//	int i, j, k, hap, cnt=0;
//	for (i = 1; i <= 20; i++) {  //범위는 곱했을때 5000이 넘는기준
//		for (j = 1; j <= 20; j++) {
//			for (k = 1; k <= 20; k++) {
//				hap = i * 300 + j * 400 + k * 500;
//				if (cnt == 5) break;
//				if (hap == 5000) {
//					cnt++;
//					printf("i=%d, j=%d, k=%d, hap=%d, cnt=%d\n", i, j, k, hap,cnt);
//					
//				}
//				
//			}
//		}
//	}
//	
//	system("pause");
//		
//	return 0;
//	
//	}
