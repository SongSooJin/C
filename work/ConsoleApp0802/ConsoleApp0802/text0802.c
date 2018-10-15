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
//#define num 7
//
//
//int main() {
//
//	int col, row, k = 0;
//	int s , e = num, mid;
//	int arr1[num + 1][num + 1] = { 0 };
//	mid = num / 2+1; // (1+num)/2; 미들구하는 방법 가운데 구하는방법
//	s = mid;//s = mid+1;
//	e = mid;//e = mid-1;
//					 마름모
//
//	for (row = 1; row <= num; row++) {
//		if (row <= mid) {
//			s--; // s= s+1;
//			e++; // e = e-1;
//
//		}
//		else {
//			s++; // s = s-1;
//			e--; // e=e +1;
//		}
//		for (col = s; col <= e; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//		if (row <= mid) {
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
//	for (row = 1; row <= num; row++) {
//		for (col = 1; col <= num; col++) {
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
//	int s , e = num, mid;
//	int arr1[num][num] = { 0 };
//	mid = num / 2; // (1+num)/2; 미들구하는 방법 가운데 구하는방법
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

//#include<stdio.h>
//#define NUM 10

//int main() {
//	int i, j, k;
//
//	for (i = 2; i <= 9; i++) {
//		//if(i <=5){
//		//if (i % 2 ==1) {
//			for (j = 1; j <= 9; j++) {
//				if (i % 2 == 1 && j % 3 == 0) {
//					//if (j % 3 != 0) {
//					k = i * j;
//					printf("%d * %d= %d\n", i, j, k);
//				}
//			//	}
//				//if (j % 2 ==1) {
//				//if (j != 5) {
//					//continue;
//				//}
//				//else {
//					//k = i * j;
//					//printf("%d * %d= %d\n", i, j, k);
//				//}
//			//}
//				//else {
//					//continue;
//				//}
//		//}
//		//else {
//			//break;
//			//continue;
//		}
//		printf("------------------------\n");
//	}
//
//	printf("------------반복문 종료-------------\n");
//	printf("%d * %d= %d\n", i, j, k);
//	system("pause");
//
//	return 0;
//
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
//
//				if (i%2== 1) {
//					//printf("%d * %d= %d\n", i, j, k);
//					if (j % 2 == 0) {
//						printf("%d * %d= %d\n", i, j, k);
//					}
//				}
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
//#define num 5
//
//int main() {
//
//	int lo , col, row, k = 0;
//	int arr1[num+1][num+1] = { 0 };
//	//대각선 
//
//	for (lo = 2; lo <= num * 2; lo++) {
//		for (row = 1; row <= num; col++) {
//			col = lo - row;
//
//			if (col < 1)  continue;
//			if (col > num) continue;
//			k = k + 1;
//			arr1[row][col] = k;
//		}
//	}
//		
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= num; row++) {
//		for (col = 1; col < num; col++) {
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
//	//int s = 1, e = NUM, temp, sw = 1;
//	int arr1[NUM+1][NUM+1] = { 0};
//
//	//ㄹ 도형
//	
//	for (row = 1; row <= NUM; row++) {
//		if (row % 2 == 1) {
//			for (col = 1; col <= NUM; col++) {
//				//for (col = s; col != e+sw; col +=sw) {
//				k++;
//				arr1[row][col] = k;
//			}
//		}
//		//temp = s;
//		//s = e;
//		//e = temp;
//		//sw = sw * (-1); // sw=-sw
//			
//		else {
//			for (col = NUM; col >= 1; col--) {
//				k++;
//				arr1[row][col] = k;
//			}
//		}
//	}
//	
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM; row++) {
//		for (col = 1; col <= NUM; col++) {
//			printf("%3d", arr1[row][col]);
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
//#define num 5
//
//int main() {
//
//	int col, row, k = 0;
//	int s = 1, e = num, temp, sw = 1;
//	int arr1[num + 1][num + 1] = { 0 };
//
//	//ㄹ도형 
//
//	for (row = 1; row <= num; row++) {
//		for (col = s; col != e + sw; col += sw) {
//			k++;
//			arr1[row][col] = k;
//		}
//		/*temp = s;
//		s = e;
//		e = temp;
//		sw = sw * (-1); */
//		s = s + e;
//		e = s - e;
//		s = s - e;
//		sw = sw * (-1);
//	}
//
//
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= num; row++) {
//		for (col = 1; col <= num; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
//int main() {
//
//	int col, row=1, k = 0, mid,sum;
//	int arr1[NUM + 2][NUM + 2] = { 0 };
//	mid = NUM / 2 + 1;
//	col = mid;
//	//마방진 마지막열에 합구하기
//
//	for (k = 1; k <= NUM * NUM; k++) {
//		arr1[row][col] = k;
//		arr1[NUM + 1][col] = arr1[NUM + 1][col] + k;// += k;//arr1[row+1][col] = arr1[row]+k + arr1[col]+k;
//		arr1[row][NUM + 1] = arr1[row][NUM+1] + k;//+= k;
//		if (row == col) {
//			arr1[NUM + 1][NUM + 1] = arr1[NUM + 1][NUM + 1] + k;
//		}
//		if (k%NUM == 0) {
//			row = row + 1;
//		}
//		else {
//			row = row - 1;
//			col = col + 1;
//			if (row < 1)row = NUM;
//			if (col > NUM)col = 1;
//		}		
//	}
//
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 1; row <= NUM+1; row++) {
//		for (col = 1; col <= NUM+1; col++) {
//			printf("%3d", arr1[row][col]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
////내림차순
//int main() {
//
//	int arr1[NUM] = { 50,30,70,40,60 };
//	int rank[NUM] = { 0 };
//		int i, j;
//		
//		
//		for (i = 0; i < NUM; i++) {
//			rank[i] = 1;
//		}
//			for (i = 0; i < NUM; i++) {
//				for (j = 0; j < NUM; j++) {
//					if (arr1[i] < arr1[j]) {
//						rank[i] = rank[i] + 1;
//					}
//				}
//			}
//			for (i = 0; i < NUM; i++) {
//				printf("%3d", arr1[i]);
//			}
//			printf("\n==================\n");
//				for (j = 0; j < NUM; j++) {
//					printf("%3d", rank[j]);
//				}
//		
//	system("pause");
//
//	return 0;
//}


//#include<stdio.h>
//#define ROW 2
//#define COL 5
////내림차순
//int main() {
//
//	int arr1[ROW][COL] = { 50,30,70,40,60 };
//	int i, j, k;
//	int temp,
//	
//	for (i= 0; i < COL; i++) {
//		arr1[1][i] = 1;
//	}
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%3d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n========================\n");
//	for (i = 0; i < COL - 1; i++) {
//		for (j = i + 1; j < COL; j++) {
//			if (arr1[0][i] < arr1[0][j]) {
//				arr1[1][i] = arr1[1][i] + 1; // arr1[1][i]++;
//			}
//			else {
//				arr1[1][j] = arr1[1][j] + 1;
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%3d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n========================\n");
//		for (i = 0; i < COL - 1; i++) {
//			for (j = i + 1; j < COL; j++) {
//				if (arr1[1][i] > arr1[1][j]) {
//					for (k = 0; k < 2; k++) {
//						temp = arr1[k][i]; // arr1[1][i]++;
//						arr1[k][i] = arr1[k][j];
//						arr1[k][j] = temp;
//					}
//				}
//			}
//		}
//		for (i = 0; i < ROW; i++) {
//			for (j = 0; j < COL; j++) {
//				printf("%3d", arr1[i][j]);
//			}
//			printf("\n");
//
//		}
//
//		system("pause");
//
//		return 0;
//	}

//#include<stdio.h>
//#define ROW 2
//#define COL 5
////내림차순
//int main() {
//
//	int arr1[ROW][COL] = { 50,30,70,40,60 };
//	int i, j, k;
//	int temp, lo;
//
//	for (i = 0; i < COL; i++) {
//			arr1[1][i] = 1;
//	}
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%3d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n========================\n");
//	for (i = 0; i < COL - 1; i++) { //col-1 = 선택정렬 / 두개비교하기 때문에 
//		for (j = i + 1; j < COL; j++) { // j = i+1 / 비교대상 
//			if (arr1[0][i] < arr1[0][j]) { // 나보다 크면 
//				arr1[1][i] = arr1[1][i] + 1; // arr1[1][i]++; / 내가 석차 +1
//			}
//			else if (arr1[0][i] > arr1[0][j]) { // 내가 크면 
//				arr1[1][j] = arr1[1][j] + 1; // arr1[1][i]++; / 너가 석차 +1
//			}
//		
//			else {
//				continue;
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%3d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n========================\n");
//	for (i = 0; i < COL - 1; i++) {
//		//lo = j;
//		for (j = i + 1; j < COL; j++) {
//			if (arr1[1][i] > arr1[1][j]) { // 나보다 적으면 교환할게요 
//				//lo = j;
//				for (k = 0; k < 2; k++) {  // 두번 교환합니다. 
//					temp = arr1[k][i]; // arr1[1][i]++;
//					arr1[k][i] = arr1[k][j];
//					arr1[k][j] = temp;
//				}
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%3d", arr1[i][j]);
//		}
//		printf("\n");
//
//	}
//
//	system("pause");
//
//	return 0;
//}

//#include<stdio.h>
//#define NUM 5
//
////내림차순
//int main() {
//
//	int arr1[NUM] = { 50,30,70,50,60 };
//	int i, j, k;
//	int temp;
//
//	printf("======정렬 전 자료======\n");
//	for (i = 0; i < NUM; i++) {
//		printf("%3d", arr1[i]);
//
//	}
//	printf("\n========================\n");
//	
//	/* 선택정렬  기준을  i 
//	for (i = 0; i < num - 1; i++) { //정렬하기 위해선 4번만 돌면 된다  두개를 세트로 해서 비교하기 때문에 
//		for (j = i + 1; j < num; j++) { // 선택한거 부터 끝까지 
//			if (arr1[i] > arr1[j]) { // 나보다 작은 값을 만나면 교환
//				temp = arr1[i]; // arr1[1][i]++;
//				arr1[i] = arr1[j];
//				arr1[j] = temp;
//			}
//		}
//	}
//	*/
// /* 선택정렬 기준 j
//	//기준을 j
//	for (i = 0; i < NUM - 1; i++) { //i는 커지고
//		for (j = 0; j < NUM - 1 - i; j++) { // j첫줄부터 값이결정되었기 때문에 -i만큼 빼준다 /마지막은 자료가 바로 들어가기때문에 마지막은 -i
//			if (arr1[j] > arr1[j + 1]) {
//				temp = arr1[j]; // arr1[1][i]++;
//				arr1[j] = arr1[j+1];
//				arr1[j+1] = temp;				
//			}
//		}
//	}
// */
//
//	printf("======정렬 후 자료======\n");
//	for (i = 0; i < NUM; i++) {
//		printf("%3d", arr1[i]);
//
//	}
//	printf("\n");
//	system("pause");
//
//	return 0;
//}