//#include<stdio.h>
//#define num 5
//
//
//int main() {
//
//	int col, row, k = 0;
//	int arr1[num+1][num+1] = { 0};
//
//	//���ﰢ�� ���� ä��� -1
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
//	//���ﰢ�� ���� ä��� -1 / 0���� ���� 
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
//	//���ﰢ�� ���� ä��� -2
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
//	//���ﰢ�� ���� ä��� -2 /0��������
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
//	//���ﰢ�� ���� ä��� -3
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
//	//���ﰢ�� ���� ä��� -3 0�������ַ�
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
//	//���ﰢ�� ���� ä��� -4
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
//	���ﰢ�� ���� ä��� -4 / 0���� ���� 
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
////��������
//int main() {
//
//	int arr1[NUM] = { 50,30,70,50,60 };
//	int i, j, k;
//	int temp;
//	mid = NUM / 2 + 1;
//
//	printf("======���� �� �ڷ�======\n");
//	for (i = 0; i < NUM; i++) {
//		printf("%3d", arr1[i]);
//
//	}
//	printf("\n========================\n");
//	
//	/* ��������  ������  i 
//	for (i = 0; i < num - 1; i++) { //�����ϱ� ���ؼ� 4���� ���� �ȴ�  �ΰ��� ��Ʈ�� �ؼ� ���ϱ� ������ 
//		for (j = i + 1; j < num; j++) { // �����Ѱ� ���� ������ 
//			if (arr1[i] > arr1[j]) { // ������ ���� ���� ������ ��ȯ
//				temp = arr1[i]; // arr1[1][i]++;
//				arr1[i] = arr1[j];
//				arr1[j] = temp;
//			}
//		}
//	}
//	*/
//	 //�������� ���� j
//	//������ j
//	for (i = 0; i < NUM - 1; i++) { //i�� Ŀ����
//		for (j = 0; j < NUM - 1 - i; j++) { // jù�ٺ��� ���̰����Ǿ��� ������ -i��ŭ ���ش� /�������� �ڷᰡ �ٷ� ���⶧���� �������� -i
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
//	printf("======���� �� �ڷ�======\n");
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
//		printf(" ���� �Է�?   9999�� ���� ");
//		scanf_s("%d", &num);
//		printf("���� �Է� = %d \n", num);
//		if (num == 9999)break;
//
//		if (num >= 101 || num < 0) {
//			printf("�����Է� ���� 0-100�Է� ��� : \n");
//		}
//		else {
//		num = num / 10;
//		switch (num) {
//
//		case 10:
//		case 9:
//			printf("a��� \n");
//			break;
//		case 8:
//			printf("b��� \n");
//			break;
//		case 7:
//			printf("c��� \n");
//			break;
//		case 6:
//			printf("d��� \n");
//			break;
//		case 5: case 4: case 3: case 2: case 1: case 0:
//			printf("f��� \n");
//			break;
//		default:
//			printf("�Է��������� 0-100 �Է� ��� :  \n");
//		}
//	}
//}
//	
//	/* ����if
//	if (num >= 90 && num <=100) {
//		printf("A��� \n");
//	}
//
//	else if (num >= 80 && num < 90) {
//		printf("B��� \n");
//	}
//
//	else if (num >= 70 && num < 80) {
//		printf("C��� \n");
//	}
//
//	else if (num >= 60 && num < 70) {
//		printf("D��� \n");
//	}
//	else if (num >= 100 || num < 0) {
//		printf("�߸��Է��ϼ̽��ϴ�. \m"); 
//	}
//
//	else {
//		printf("F��� \n");
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
//			a[i][5] += a[i][j]; // ���� ǥ�� : a[i][5]  = a[i][5] + a[i][j];
//		}
//		a[i][6] = a[i][5] / 4;
//		a[i][7] = 1;
//	}
//
//	for (i =0; i <= 4; i++) { 
//		for (j = 0; j <= 4; j++) {
//			if (a[i][5] < a[j][5]) { // ������ �񱳴���� ū�� ������ 
//				a[i][7] += 1; // ������ 1����
//			}
//		}
//	}
//
//	 //�������Ĺ�� - ��������
//	//for (i = 0; i <= 3; i++) {
//	//	for (j = i + 1; j <= 4; j++) {
//	//		if (a[i][5] < a[j][5]) {  // ������ �񱳴���� ū�� ������ 
//	//			a[i][7] += 1; // ������ 1����
//	//		}
//	//		else if (a[i][5] > a[j][5]) {
//	//			a[j][7] += 1; //�ƴϸ� �ʼ��� 1����
//	//		}
//	//		else {
//	//			continue;
//	//		}
//	//	}
//	//}
//
//	printf("�Է��� �ڷ� ��� \n");
//	printf("-----------------------------\n");
//	printf("   ��ȣ   ����  ����  ����  ����  ����  ���  ���� \n");
//	for (i = 0; i <= 4; i++) {
//		for (j = 0; j <= 7; j++) {
//			printf("%6d", a[i][j]);
//		}
//		printf("\n");
//	}
//	//�����Է�
//	printf("���� �Է� : ");
//	scanf_s("%d", &rank);
//	printf("\n");
//
//	//�����˻� ���İ� ������� ã���� 
//	for (i = 0; i <= 4; i++) {
//		if (a[i][7] == rank) {
//			printf("%d�� �л��� ����\n", rank);
//			printf("-----------------------------\n");
//			printf("   ��ȣ   ����  ����  ����  ����  ����  ���  ���� \n");
//			for (j = 0; j <= 7; j++) {
//				printf("%6d", a[i][j]);
//			}
//			printf("\n-----------------------------\n");
//			break;
//		}
//	}
//	////������ ������ ����
//	////���� ���� 1 
//	//for (i = 0; i <= 3; i++) {
//	//	for (j = i + 1; j <= 4; j++) {
//	//		if (a[i][7] > a[j][7]) {  // ������ �񱳴���� ū�� ������ 
//	//			for (k = 0; k <= 7; k++) {
//	//				temp = a[j][k];
//	//				a[j][k] = a[i][k];
//	//				a[i][k] = temp;
//	//			}
//	//		}
//	//	}
//	//}
//
//	////���� ����2
//	//for (i = 0; i <= 3; i++) {
//	//	f = i; //������ ���� ����
//	//	for (j = i + 1; j <= 4; j++) {
//	//		if (a[f][7] > a[j][7]) { // a[i][7] > a[j][7] / ������ f���� j�� �� ���ô�� �ϳ��� �����ؼ� ���� �������� ��ü 
//	//			f = j;
//	//		}
//	//	}
//	//	for (k = 0; k <= 7; k++) { // �񱳰� ������ �ѹ��� ��ȯ 
//	//		temp = a[f][k];
//	//		a[f][k] = a[i][k];
//	//		a[i][k] = temp;
//	//	}
//	//}
//
//	////�������� 0���� ���� ������-1 
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
//	//�������� 0���� ���� ������-1 -1
//	for (i = 0; i <= 3; i++) {
//		sw = 0; //��ȯȶ���� 0���� ���س��� �Ʒ� �񱳽��� 
//		for (j = 0; j <= 3 - i; j++) {
//			if (a[j][7] > a[j + 1][7]) {
//				for (k = 0; k <= 7; k++) {
//					temp = a[j][k];
//					a[j][k] = a[j + 1][k];
//					a[j + 1][k] = temp;
//					sw = 1; //��ȯ�ϸ� ��ȯȶ�� ���� 
//				}
//			}
//		}
//		if (sw == 0)break; //�ٵ� ��ȯ�� ���Ͼ�� �׸���  // ���� sw==0 ����ġ�� 0�� ���ٸ� �׸��� sw =0 �� ���� �ݺ����� �� ���� ����
//	}
//
//
//	printf("������ �ڷ� ��� \n");
//	printf("-----------------------------\n");
//	printf("   ��ȣ   ����  ����  ����  ����  ����  ���  ���� \n");
//	for (i = 0; i <= 4; i++) {
//		for (j = 0; j <= 7; j++) {
//			printf("%6d", a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	printf("-----------------------------\n");
//
//	//�����Է�
//	printf("���� �Է� : ");
//	scanf_s("%d", &rank);
//	printf("\n");
//
//	//�����˻�
//	for (i = 0; i <= 4; i++) {
//		if (a[i][7] == rank) {
//			printf("%d�� �л��� ����\n", rank);
//			printf("-----------------------------\n");
//			printf("   ��ȣ   ����  ����  ����  ����  ����  ���  ���� \n");
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


