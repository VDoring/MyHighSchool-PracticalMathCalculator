#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <time.h>

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
	int x = 17;

	int isMenu;
	while (1) {
		xy(15, 1); printf("< 2020�� 3�г� 1�б� ���а��� ���� >");

		xy(x, 4); printf("1. �ﰢ��/�簢�� ���ϱ�");
		xy(x, 6); printf("2. n��° �� ���ϱ�");
		xy(x, 8); printf("3. n���� �Ǻ���ġ �� ���ϱ�");
		xy(x, 10); printf("4. �������� ���ϱ�");
		xy(x, 12); printf("5. ü���� ���� ���ϱ�");
		xy(x, 14); printf("6. ���� ��·� ���ϱ�");
		xy(x, 16); printf("7. �ݹ߰�� ���ϱ�");
		xy(x, 18); printf("8. ������ ������ ���̷� �����Ÿ� ���ϱ�");
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
		xy(x, 10); printf("%d���� �ﰢ���� ���� %d �Դϴ�.\n\n\n", n, ans);
		system("pause");
		break;
	case 2:
		xy(x, 7); printf("����� �簢���� ���Ҳ�����? -> ");
		scanf("%d", &n);
		ans = n * n;
		xy(x, 10); printf("%d���� �簢���� ���� %d �Դϴ�.\n\n\n", n, ans);
		system("pause");
		break;
	default:
		break;
	}

	return;
}

void nNum() { //2��
	system("cls");
	int x = 2;

	int isNumType;
	int a;
	int n;
	int d;
	int rNum = 1;
	int r;
	int ans = 0;

	xy(x, 2); printf("���Ϸ��� ���� �����ϼ���.");
	xy(x + 1, 4); printf("[1]������ ���� ����ؼ� ���ϱ�");
	xy(x + 34, 4); printf("[2]������ ���� ����ؼ� ���ϱ�");
	xy(x, 6); printf("-> ");
	scanf("%d", &isNumType);

	xy(x, 8); printf("1��° ���� �����ΰ���? -> ");
	scanf("%d", &a);
	xy(x, 10); printf("����� ���� Ȯ���ϰ� �ͳ���? -> ");
	scanf("%d", &n);
	switch (isNumType)
	{
	case 1:
		xy(x, 12); printf("������ ���� �����ΰ���? -> ");
		scanf("%d", &d);
		ans = a + (n - 1)*d;
		break;
	case 2:
		xy(x, 12); printf("������ ���� �����ΰ���? -> ");
		scanf("%d", &r);
		--n; //���� �κп��� 1�� ��
		for (int i = 0; i < n; i++) {
			rNum *= r;
		}
		ans = a * rNum; //ù°���� ����
		break;
	default:
		break;
	}
	xy(x, 15); printf("%d���� ���� %d �Դϴ�.\n\n\n", n+1, ans);
	system("pause");

	return;
}

void nPibo() { //3��
	system("cls");
	int x = 2;

	int n;
	int ans;

	xy(x, 2); printf("����� �Ǻ���ġ ���� ���ұ��? -> ");
	scanf("%d", &n);
	if (n < 3) {
		printf("n�� 3���� ũ�ų� ���ƾ��մϴ�.");
		Sleep(700);
		return;
	}
	ans = (n - 1) + (n - 2);
	xy(x, 5); printf("%d���� �Ǻ���ġ ���� %d �Դϴ�.\n\n\n", n, ans);
	system("pause");

	return;
}

void THI() { //4��
	system("cls");
	int x = 2;

	int temperature;
	int WB;
	double ans;

	xy(x, 2); printf("����� �� �� �ΰ���? -> ");
	scanf("%d", &temperature);
	xy(x, 4); printf("�����µ��� �� �� �ΰ���? -> ");
	scanf("%d", &WB);
	ans = 0.72 * (temperature + WB) + 40.6;
	xy(x, 7); printf("���������� %.4lf �Դϴ�.\n\n\n", ans);
	system("pause");

	return;
}

void BMI() { //5��
	system("cls");
	int x = 2;

	float height_usr;
	float height_final;
	float weight;
	float ans;

	xy(x, 2); printf("Ű�� �� cm�Դϱ�? -> ");
	scanf("%f", &height_usr);
	xy(x, 4); printf("�����Դ� �� kg�Դϱ�? -> ");
	scanf("%f", &weight);

	height_usr /= 100; //Ű ���� cm -> m ��ȯ
	height_final = height_usr * height_usr; //Ű �����ϱ�
	ans = weight / height_final; //�������� ����

	xy(x, 7); printf("ü���� ������ �� %.4f�Դϴ�.\n\n\n", ans);
	system("pause");

	return;
}

void InfRate() { //6��
	system("cls");
	int x = 2;

	float basePoint;
	float comparisonPoint;
	float ans;

	xy(x, 2); printf("���ؽ������������� �Է��ϼ��� -> ");
	scanf("%f", &basePoint);
	xy(x, 4); printf("�񱳽������������� �Է��ϼ��� -> ");
	scanf("%f", &comparisonPoint);
	ans = ((comparisonPoint - basePoint) / basePoint) * 100;
	xy(x, 7); printf("������·��� %.2f%% �Դϴ�.\n\n\n", ans);
	system("pause");

	return;
}

void COR() { //7��
	system("cls");
	int x = 2;

	float crash_before;
	float crash_after;
	float ans;

	xy(x, 2); printf("�浹 ������ �ӵ��� �Է��ϼ��� -> ");
	scanf("%f", &crash_before);
	xy(x, 4); printf("�浹 ������ �ӵ��� �Է��ϼ��� -> ");
	scanf("%f", &crash_after);
	ans = crash_after / crash_before;
	xy(x, 7); printf("�ݹ߰���� %f �Դϴ�.\n\n\n", ans);
	system("pause");

	return;
}

void Scale() { //8��
	system("cls");
	int x = 2;

	double mapScale;
	double mapCentimeter;
	double distance;

	xy(x, 2); printf("������ ��ô�� ���Դϱ�?(1:n) -> ");
	scanf("%lf", &mapScale);
	xy(x, 4); printf("�����󿡼� �����Ÿ��� �� cm �ΰ���? -> ");
	scanf("%lf", &mapCentimeter);
	distance = mapScale * mapCentimeter; //������ ���� x �������� �����Ÿ�
	distance /= 100000; //cm -> km �Ǹ鼭 0�� 5�� ����
	xy(x, 7); printf("���� �Ÿ��� %.2lfKm�Դϴ�\n\n\n", distance);
	system("pause");

	return;
}