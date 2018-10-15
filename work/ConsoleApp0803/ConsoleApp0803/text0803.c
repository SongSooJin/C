//#include<stdio.h>
//#define num 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[num+1][num+1] = { 0};
//
//	//정삼각형 도형 채우기 -1
//	
//	for (row = 1; row <= num; row++) {
//		for (col = 1; col <= row; col++) {
//			k++;
//			arr1[row][col] = k;
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
//#define num 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[num][num] = { 0};
//
//	//정삼각형 도형 채우기 -1 / 0초점 부터 
//	
//	for (row = 0; row < num; row++) {
//		for (col = 0; col < row+1; col++) {
//			k++;
//			arr1[row][col] = k;
//		}
//	}
//	printf("======arr1[row][col]=======\n");
//
//	for (row = 0; row  <num; row++) {
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
//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM][NUM] = { 0};
//
//	//정삼각형 도형 채우기 -2 /0초점부터
//	
//	for (row = 0; row < NUM; row++) {
//		for (col =(-1+ NUM)-row; col < NUM; col++) {
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

//int main() {
//
//	int col, row, k = 0;
//	int arr1[NUM + 1][NUM + 1] = { 0 };
//
//	//정삼각형 도형 채우기 -3
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
//	system("pause");
//
//	return 0;
//}


//#include<stdio.h>
//#define num 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[num][num] = { 0 };
//
//	정삼각형 도형 채우기 -4 / 0부터 초점 
//
//	for (row = 0; row < num; row++) {
//		for (col = 0; col < num-row; col++) {
//			k++;
//			arr1[row][col] = k;
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
//#define NUM 5
//
////내림차순
//int main() {
//
//	int arr1[NUM] = { 50,30,70,50,60 };
//	int i, j, k;
//	int temp;
//	mid = NUM / 2 + 1;
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
//	 //선택정렬 기준 j
//	//기준을 j
//	for (i = 0; i < NUM - 1; i++) { //i는 커지고
//		for (j = 0; j < NUM - 1 - i; j++) { // j첫줄부터 값이결정되었기 때문에 -i만큼 빼준다 /마지막은 자료가 바로 들어가기때문에 마지막은 -i
//			if (arr1[j] > arr1[j + 1]) {
//				temp = arr1[j]; // arr1[1][i]++;
//				arr1[j] = arr1[j+1];
//				arr1[j+1] = temp;				
//			}
//			if (j < mid) {
//			
//			}
//		}
//	}
//	 
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

//#include <stdio.h>
//
//int main(void) {
//
//	int num;
//	while (1) {
//		printf(" 점수 입력?   9999는 종료 ");
//		scanf_s("%d", &num);
//		printf("점수 입력 = %d \n", num);
//		if (num == 9999)break;
//
//		if (num >= 101 || num < 0) {
//			printf("점수입력 오류 0-100입력 요망 : \n");
//		}
//		else {
//		num = num / 10;
//		switch (num) {
//
//		case 10:
//		case 9:
//			printf("a등급 \n");
//			break;
//		case 8:
//			printf("b등급 \n");
//			break;
//		case 7:
//			printf("c등급 \n");
//			break;
//		case 6:
//			printf("d등급 \n");
//			break;
//		case 5: case 4: case 3: case 2: case 1: case 0:
//			printf("f등급 \n");
//			break;
//		default:
//			printf("입력점수오류 0-100 입력 요망 :  \n");
//		}
//	}
//}
//	
//	/* 다중if
//	if (num >= 90 && num <=100) {
//		printf("A등급 \n");
//	}
//
//	else if (num >= 80 && num < 90) {
//		printf("B등급 \n");
//	}
//
//	else if (num >= 70 && num < 80) {
//		printf("C등급 \n");
//	}
//
//	else if (num >= 60 && num < 70) {
//		printf("D등급 \n");
//	}
//	else if (num >= 100 || num < 0) {
//		printf("잘못입력하셨습니다. \m"); 
//	}
//
//	else {
//		printf("F등급 \n");
//	}*/
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//
//	int i, j, k, temp;
//	int a[5][8] = { 0 };
//	int f,sw;
//	int rank;
//
//	a[0][1] = 89, a[0][2] = 100, a[0][3] = 79, a[0][4] = 76;
//	a[1][1] = 46, a[1][2] = 78, a[1][3] = 98, a[1][4] = 78;
//	a[2][1] = 86, a[2][2] = 45, a[2][3] = 77, a[2][4] = 98;
//	a[3][1] = 67, a[3][2] = 32, a[3][3] = 88, a[3][4] = 99;
//	a[4][1] = 72, a[4][2] = 64, a[4][3] = 71, a[4][4] = 88;
//
//	for (i = 0; i <=4; i++) {
//		a[i][0] = i + 1;
//		a[i][5] = 0;
//		for (j = 1; j <= 4; j++) {
//			a[i][5] += a[i][j]; // 같은 표현 : a[i][5]  = a[i][5] + a[i][j];
//		}
//		a[i][6] = a[i][5] / 4;
//		a[i][7] = 1;
//	}
//
//	for (i =0; i <= 4; i++) { 
//		for (j = 0; j <= 4; j++) {
//			if (a[i][5] < a[j][5]) { // 나보다 비교대상이 큰거 만나면 
//				a[i][7] += 1; // 내석차 1증가
//			}
//		}
//	}
//
//	 //선택정렬방법 - 순위석차
//	//for (i = 0; i <= 3; i++) {
//	//	for (j = i + 1; j <= 4; j++) {
//	//		if (a[i][5] < a[j][5]) {  // 나보다 비교대상이 큰거 만나면 
//	//			a[i][7] += 1; // 내석차 1증가
//	//		}
//	//		else if (a[i][5] > a[j][5]) {
//	//			a[j][7] += 1; //아니면 너석차 1증가
//	//		}
//	//		else {
//	//			continue;
//	//		}
//	//	}
//	//}
//
//	printf("입력한 자료 출력 \n");
//	printf("-----------------------------\n");
//	printf("   번호   국어  영어  수학  전산  총점  평균  석차 \n");
//	for (i = 0; i <= 4; i++) {
//		for (j = 0; j <= 7; j++) {
//			printf("%6d", a[i][j]);
//		}
//		printf("\n");
//	}
//	//석차입력
//	printf("석차 입력 : ");
//	scanf_s("%d", &rank);
//	printf("\n");
//
//	//순차검색 정렬과 상관없이 찾아짐 
//	for (i = 0; i <= 4; i++) {
//		if (a[i][7] == rank) {
//			printf("%d등 학생의 정보\n", rank);
//			printf("-----------------------------\n");
//			printf("   번호   국어  영어  수학  전산  총점  평균  석차 \n");
//			for (j = 0; j <= 7; j++) {
//				printf("%6d", a[i][j]);
//			}
//			printf("\n-----------------------------\n");
//			break;
//		}
//	}
//	////정렬의 기준은 석차
//	////선택 정렬 1 
//	//for (i = 0; i <= 3; i++) {
//	//	for (j = i + 1; j <= 4; j++) {
//	//		if (a[i][7] > a[j][7]) {  // 나보다 비교대상이 큰거 만나면 
//	//			for (k = 0; k <= 7; k++) {
//	//				temp = a[j][k];
//	//				a[j][k] = a[i][k];
//	//				a[i][k] = temp;
//	//			}
//	//		}
//	//	}
//	//}
//
//	////선택 정렬2
//	//for (i = 0; i <= 3; i++) {
//	//	f = i; //에프에 아이 저장
//	//	for (j = i + 1; j <= 4; j++) {
//	//		if (a[f][7] > a[j][7]) { // a[i][7] > a[j][7] / 저장한 f값을 j와 비교 선택대상 하나만 선택해서 비교후 적은값과 교체 
//	//			f = j;
//	//		}
//	//	}
//	//	for (k = 0; k <= 7; k++) { // 비교가 끝나면 한번만 교환 
//	//		temp = a[f][k];
//	//		a[f][k] = a[i][k];
//	//		a[i][k] = temp;
//	//	}
//	//}
//
//	////버블정렬 0기준 끝이 마지막-1 
//	//for (i = 0; i <= 3; i++) {
//	//	for (j = 0; j <= 3 - i; j++) {
//	//		if (a[j][7] > a[j + 1][7]) {
//	//			for (k = 0; k <= 7; k++) {
//	//				temp = a[j][k];
//	//				a[j][k] = a[j + 1][k];
//	//				a[j + 1][k] = temp;
//	//			}
//	//		}
//	//	}
//	//}
//
//	//버블정렬 0기준 끝이 마지막-1 -1
//	for (i = 0; i <= 3; i++) {
//		sw = 0; //교환횃수를 0으로 정해놓고 아래 비교시작 
//		for (j = 0; j <= 3 - i; j++) {
//			if (a[j][7] > a[j + 1][7]) {
//				for (k = 0; k <= 7; k++) {
//					temp = a[j][k];
//					a[j][k] = a[j + 1][k];
//					a[j + 1][k] = temp;
//					sw = 1; //교환하면 교환횃수 증가 
//				}
//			}
//		}
//		if (sw == 0)break; //근데 교환이 안일어나면 그만해  // 만약 sw==0 스위치가 0과 같다면 그만해 sw =0 은 대입 반복문을 다 돌고 빠짐
//	}
//
//
//	printf("정렬후 자료 출력 \n");
//	printf("-----------------------------\n");
//	printf("   번호   국어  영어  수학  전산  총점  평균  석차 \n");
//	for (i = 0; i <= 4; i++) {
//		for (j = 0; j <= 7; j++) {
//			printf("%6d", a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	printf("-----------------------------\n");
//
//	//석차입력
//	printf("석차 입력 : ");
//	scanf_s("%d", &rank);
//	printf("\n");
//
//	//순차검색
//	for (i = 0; i <= 4; i++) {
//		if (a[i][7] == rank) {
//			printf("%d등 학생의 정보\n", rank);
//			printf("-----------------------------\n");
//			printf("   번호   국어  영어  수학  전산  총점  평균  석차 \n");
//			for (j = 0; j <= 7; j++) {
//				printf("%6d", a[i][j]);
//			}
//			printf("\n-----------------------------\n");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}



