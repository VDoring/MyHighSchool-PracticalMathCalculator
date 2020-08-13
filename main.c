#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void xy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void triNsqu(); //1��
void nNum(); //2��
void nPibo(); //3��
void THI(); //4��
void BMI(); //5��
void InfRate(); //6��
void COR(); //7��
void Scale(); //8��

int main() {
	system("mode con cols=70 lines=27");
	system("title HUDT Lv3 Math Calculator - by YHJ");
	int x = 22;

	int isMenu;
	while (1) {
		xy(16, 1); printf("< 2020�� 3�г� 1�б����� ���İ��� >");

		xy(x, 4); printf("1. �ﰢ��/�簢�� ���ϱ�");
		xy(x, 6); printf("2. n��° �� ���ϱ�");
		xy(x, 8); printf("3. n���� �Ǻ���ġ �� ���ϱ�");
		xy(x, 10); printf("4. �������� ���ϱ�");
		xy(x, 12); printf("5. ü���� ���� ���ϱ�");
		xy(x, 14); printf("6. ���� ��·� ���ϱ�");
		xy(x, 16); printf("7. �ݹ߰�� ���ϱ�");
		xy(x, 18); printf("8. ���� ���ϱ�");
		xy(x + 7, 23); printf("�Է� : ");

		scanf("%d", &isMenu);
		switch (isMenu) {
		case 1:
			triNsqu();
			break;
		case 2:
			nNum();
			break;
		case 3:
			nPibo();
			break;
		case 4:
			THI();
			break;
		case 5:
			BMI();
			break;
		case 6:
			InfRate();
			break;
		case 7:
			COR();
			break;
		case 8:
			Scale();
			break;
		default:
			xy(x, 24); printf("�ùٸ��� ���� ���Դϴ�.");
			Sleep(500);
			break;
		}
		system("cls");
	}
}

void triNsqu() { //1��
	system("cls");
	int x = 2;

	int isTriSqu;
	int n;
	int ans = 0;

	xy(x, 2); printf("���Ϸ��� ���� �����ϼ���.");
	xy(x + 1, 4); printf("[1]�ﰢ��");
	xy(x + 13, 4); printf("[2]�簢��");
	xy(x, 6); printf("-> ");
	scanf("%d", &isTriSqu);
	
	switch (isTriSqu) {
	case 1:
		xy(x, 7); printf("����� �ﰢ���� ���Ҳ�����? -> ");
		scanf("%d", &n);
		ans = (n * (n + 1)) / 2;
		xy(x, 9); printf("%d���� �ﰢ���� ���� %d �Դϴ�.\n\n\n", n, ans);
		system("pause");
		break;
	case 2:
		xy(x, 7); printf("����� �簢���� ���Ҳ�����? -> ");
		scanf("%d", &n);
		ans = n * n;
		xy(x, 9); printf("%d���� �簢���� ���� %d �Դϴ�.\n\n\n", n, ans);
		system("pause");
	default:
		break;
	}

	return;
}

void nNum() { //2��
	system("cls");
	int x = 2;

	int n;
	int d;
	int ans = 0;

	xy(x, 2); printf("����� ���� Ȯ���ϰ� �ͳ���?");
	xy(x, 3); printf("-> ");
	scanf("%d", &n);
	xy(x, 5); printf("������ ���� �����ΰ���?");
	xy(x, 6); printf("-> ");
	scanf("%d", &d);
	ans = n + (n + 1) * d;
	xy(x, 8); printf("%d���� ���� %d �Դϴ�.\n\n\n", n, ans);
	system("pause");

	return;
}

void nPibo() { //3��

}

void THI() { //4��

}

void BMI() { //5��

}

void InfRate() { //6��

}

void COR() { //7��

}

void Scale() { //8��

}