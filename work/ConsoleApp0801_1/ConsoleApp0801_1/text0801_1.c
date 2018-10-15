//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM][NUM] = { 0 };
//
//	//정삼각형 도형 채우기 -4
//
//	for (row = 0; row < NUM; row++) {
//		for (col = 0; col <  NUM - row; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 0; row < NUM; row++) {
//		for (col = 0; col < NUM; col++) {
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
//#define num 7
//     //모래시계 1-1 초점이 0부터 시작임 
//int main() {
//	int row, col, k = 0;
//	int s = -1, e = num, mid;
//	int arr1[num ][num] = { 0 };
//	mid = num / 2+ 1;
//	for (row = 0; row < num; row++) {
//		if (row < mid) {
//			
//			s = s + 1;//s++;
//			//s = s + 1; 
//			e--;//e = e - 1;//
//		}
//		else {
//			s--; //s = s - 1;//
//			e++; //e = e + 1;//
//		}
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//		for (row = 0; row < num; row++) {
//			for (col = 0; col < num; col++) {
//				printf("%3d", arr1[row][col]);
//
//				
//			}
//			printf("\n");
//		}
//		printf("%d", arr1[0][0]);
//	system("pause");
//	
//		return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM][NUM] = { 0 };
//
//	//정삼각형 도형 채우기 -3 0초점위주로
//
//	for (row = 0; row < NUM; row++) {
//		for (col = row ; col < NUM; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 0; row < NUM; row++) {
//		for (col = 0; col < NUM; col++) {
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
//	s = mid;
//	e = mid;
//					 //마름모
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//		if (row < mid) {
//			s--; // s= s+1;
//			e++; // e = e-1;
//		
//		}
//		else {
//			s++; // s = s-1;
//			e--; // e=e +1;
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
//#define num 7
//
//
//int main() {
//
//	int col, row, k = 0;
//	int s =1, e =num, mid;
//	int arr1[num][num] = { 0 };
//	mid = num / 2 + 1; // (1+num)/2; 미들구하는 방법 가운데 구하는방법
//	s = mid;
//	e = mid;
//	//마름모 0초점부터
//
//	for (row = 0; row < num; row++) {
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//		if (row < mid) {
//			s--; // s= s+1;
//			e++; // e = e-1;
//
//		}
//		else {
//			s++; // s = s-1;
//			e--; // e=e +1;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 0; row < num; row++) {
//		for (col = 0; col < num; col++) {
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