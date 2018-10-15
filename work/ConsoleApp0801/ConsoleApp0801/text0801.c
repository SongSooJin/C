//#include<stdio.h>
//#define NUM 10
//
////sum= 1 - 2 + 3 - 4 + 5 - 6 + 7+...+NUM항) 
//
//int main() {
//
//	int i = 0, cnt, sum = 0, sw = 0;
//	for (cnt = 0; cnt < NUM; cnt++) {
//
//		i= i+1;
//		if (sw == 0) {
//			sum = sum + i;
//			sw = 1;
//		}
//		
//		else {
//			sum = sum - i;
//			sw = 0;
//		}
//		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//
//	}
//
//	printf("------------반복문 종료-------------\n");
//	printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum= 1 - 2 + 3 - 4 + 5 - 6 + 7+...+NUM항) 
//
//int main() {
//
//	//int i = 0, cnt, sum = 0;
//	int i = 0, j = 0, cnt, sum = 0, na, mok;
//	for (cnt = 0; cnt < NUM; cnt++) {
//
//		i= i+1;
//
//		//if (i%2 == 0) {
//		if (i-i/2*2 == 0) {
//			sum = sum - i;
//		}
//		
//		else {
//			sum = sum + i;
//		}
//
//		printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//
//	}
//
//	printf("------------반복문 종료-------------\n");
//	printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum= 1 - 2 + 3 - 4 + 5 - 6 + 7+...+NUM항)
////sum= 1 (- 2) + 3 (- 4) + 5 (- 6) + 7+...+NUM항)
//
//
//int main() {
//
//
//	int i = 0, cnt, sum = 0, m, sw=1; // sw = 부호의 의미 
//	for (cnt = 0; cnt < NUM; cnt++) {
//
//		i= i+1;
//		m = i * sw;
//		sum = sum + m;
//
//		printf("cnt=%2d , i=%3d, sw=%d, m=%d , sum=%2d\n", cnt, i,sw, m, sum);
//		sw = sw * (-1);
//
//	}
//
//	printf("------------반복문 종료-------------\n");
//	printf("cnt=%2d , i=%3d , sum=%2d\n", cnt, i, sum);
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
////sum= (1*10)+(2*9)+(3*8)+...+(10*1)NUM항)
////           i*j
//
//int main() {
//
//	int i = 0, cnt, sum = 0, m, j ;
//	for (cnt = 0; cnt < NUM; cnt++) {
//		//i++; j--;
//		i = i + 1;
//		j = (1 +NUM) - i;
//		m = i*j;
//		sum = sum + m;
//
//		printf("cnt=%2d , i=%3d,  j=%d,  m=%d , sum=%2d\n", cnt, i, j, m ,sum);
//
//	}
//
//	printf("------------반복문 종료-------------\n");
//	printf("cnt=%2d , i=%3d , j=%d, sum=%2d\n", cnt, i, j, sum);
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 10
//
//
//int main() {
//
//	int i, j = 0, k = 0;
//	int arr1[NUM] = { 0 };
//	int arr2[NUM] = { 1,2,3 };
//
//	for (i = 0; i < NUM; i++) {
//		k = (0 + NUM) - i; 
//		arr2[i] = k;
//	}
//	printf("\n----------------arr2[i]-----------------\n");
//
//	for (i = 0; i < NUM; i++) {
//		printf("%3d", arr2[i]);
//	}
//	for (i = 0; i < NUM; i++) {
//		j = j + 1; // 계차수열 법칙
//		k = k + j; //
//		arr1[i] = k;
//	}
//	printf("\n----------------arr1[i]-----------------\n");
//
//	for (i = 0; i < NUM; i++) {
//		printf("%3d", arr1[i]);
//	}
//		printf("\n---------------------------------\n");
//
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM+1][NUM+1] = { 0};
//	int arr2[NUM + 1][NUM + 1] = { 0 };
//
//	//정사각형 도형 채우기 -1
//	
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col < NUM; col++) {
//			k++;
//			arr1[row][col] = k;
//			arr2[col][row] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col < NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col < NUM; col++) {
//			printf("%3d", arr2[row][col]);
//		}
//		printf("\n");
//	}
//
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM+1][NUM+1] = { 0};
//
//	//정삼각형 도형 채우기 -1
//	
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= row; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM+1][NUM+1] = { 0};
//
//	//정삼각형 도형 채우기 -2
//	
//	for (row = 1; row <= NUM; row++) {
//		for (col = (1+NUM)-row; col <= NUM; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//
//
//	system("pause"); 
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM + 1][NUM + 1] = { 0 };
//
//	정삼각형 도형 채우기 -3
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = row ; col <= NUM; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//
//
//	system("pause");
//
//	return 0;
//}


//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM + 1][NUM + 1] = { 0 };
//
//	//정삼각형 도형 채우기 -4
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= (1 + NUM) - row; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 7
//
//
//int main() {
//
//	int col, row, k = 0;
//	int s = 1, e = NUM, mid;
//	int arr1[NUM + 1][NUM + 1] = { 0 };
//	mid = NUM / 2+1; // (1+NUM)/2; 미들구하는 방법 가운데 구하는방법
//	//모래시계-1
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//		if (row < mid) {
//			s++; // s= s+1;
//			e--; // e = e-1;
//		
//		}
//		else {
//			s--; // s = s-1;
//			e++; // e=e +1;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 7
//
//
//int main() {
//
//	int col, row, k = 0;
//	int s,e , mid;
//	int arr1[NUM + 1][NUM + 1] = { 0 };
//	mid = NUM / 2 + 1; // (1+NUM)/2; 미들구하는 방법 가운데 구하는방법
//					   //모래시계-2
//
//	for (row = 1; row <= NUM; row++) {
//		if (row < mid) {
//			s = row;
//			e = (1 + NUM) - row;
//		}
//		else {
//			s= (1 + NUM) - row;
//			e = row;
//		
//		}
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//		if (row < mid) {
//			s++; // s= s+1;
//			e--; // e = e-1;
//
//		}
//		else {
//			s--; // s = s-1;
//			e++; // e=e +1;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//	printf("======arr1[row][col]=======\n");
//
//
//
//	system("pause");
//
//	return 0;
//}

//#include <stdio.h>
//#define NUM 7

 // 모래시계 1-1
//int main() {
//	int row, col, k = 0;
//	int s = 0, e = NUM+1, mid;
//	int arr1[NUM + 1][NUM + 1] = { 0 };
//	mid = NUM / 2 + 1;
//	for (row = 1; row <= NUM; row++) {
//		if (row <= mid) {
//			s = s + 1;//s++; 
//			e = e - 1;//e--;
//		}
//		else {
//			s = s - 1;//s--;
//			e = e + 1;//e++;
//		}
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//		for (row = 1; row <= NUM; row++) {
//			for (col = 1; col <= NUM; col++) {
//				printf("%3d", arr1[row][col]);
//			}
//			printf("\n");
//		}
//
//	system("pause");
//	
//		return 0;
//}