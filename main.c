#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <time.h>

void xy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void triNsqu(); //1번
void nNum(); //2번
void nPibo(); //3번
void THI(); //4번
void BMI(); //5번
void InfRate(); //6번
void COR(); //7번
void Scale(); //8번

int main() {
	system("mode con cols=70 lines=27");
	system("title HUDT Lv3 Math Calculator - by YHJ");
	int x = 17;

	int isMenu;
	while (1) {
		xy(15, 1); printf("< 2020년 3학년 1학기 수학공식 계산기 >");

		xy(x, 4); printf("1. 삼각수/사각수 구하기");
		xy(x, 6); printf("2. n번째 수 구하기");
		xy(x, 8); printf("3. n번쨰 피보나치 수 구하기");
		xy(x, 10); printf("4. 불쾌지수 구하기");
		xy(x, 12); printf("5. 체질량 지수 구하기");
		xy(x, 14); printf("6. 물가 상승률 구하기");
		xy(x, 16); printf("7. 반발계수 구하기");
		xy(x, 18); printf("8. 지도의 축적과 길이로 실제거리 구하기");
		xy(x + 7, 23); printf("입력 : ");

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
			xy(x, 24); printf("올바르지 않은 값입니다.");
			Sleep(500);
			break;
		}
		system("cls");
	}
}

void triNsqu() { //1번
	system("cls");
	int x = 2;

	int isTriSqu;
	int n;
	int ans = 0;

	xy(x, 2); printf("구하려는 것을 선택하세요.");
	xy(x + 1, 4); printf("[1]삼각수");
	xy(x + 13, 4); printf("[2]사각수");
	xy(x, 6); printf("-> ");
	scanf("%d", &isTriSqu);
	
	switch (isTriSqu) {
	case 1:
		xy(x, 7); printf("몇번쨰 삼각수를 구할껀가요? -> ");
		scanf("%d", &n);
		ans = (n * (n + 1)) / 2;
		xy(x, 10); printf("%d번쨰 삼각수의 값은 %d 입니다.\n\n\n", n, ans);
		system("pause");
		break;
	case 2:
		xy(x, 7); printf("몇번쨰 사각수를 구할껀가요? -> ");
		scanf("%d", &n);
		ans = n * n;
		xy(x, 10); printf("%d번쨰 사각수의 값은 %d 입니다.\n\n\n", n, ans);
		system("pause");
		break;
	default:
		break;
	}

	return;
}

void nNum() { //2번
	system("cls");
	int x = 2;

	int isNumType;
	int a;
	int n;
	int d;
	int rNum = 1;
	int r;
	int ans = 0;

	xy(x, 2); printf("구하려는 것을 선택하세요.");
	xy(x + 1, 4); printf("[1]일정한 값을 계속해서 더하기");
	xy(x + 34, 4); printf("[2]일정한 값을 계속해서 곱하기");
	xy(x, 6); printf("-> ");
	scanf("%d", &isNumType);

	xy(x, 8); printf("1번째 수는 무엇인가요? -> ");
	scanf("%d", &a);
	xy(x, 10); printf("몇번쨰 수를 확인하고 싶나요? -> ");
	scanf("%d", &n);
	switch (isNumType)
	{
	case 1:
		xy(x, 12); printf("공차의 값은 무엇인가요? -> ");
		scanf("%d", &d);
		ans = a + (n - 1)*d;
		break;
	case 2:
		xy(x, 12); printf("공차의 값은 무엇인가요? -> ");
		scanf("%d", &r);
		--n; //제곱 부분에서 1을 뺌
		for (int i = 0; i < n; i++) {
			rNum *= r;
		}
		ans = a * rNum; //첫째수와 곱함
		break;
	default:
		break;
	}
	xy(x, 15); printf("%d번쨰 수는 %d 입니다.\n\n\n", n+1, ans);
	system("pause");

	return;
}

void nPibo() { //3번
	system("cls");
	int x = 2;

	int n;
	int ans;

	xy(x, 2); printf("몇번쨰 피보나치 수를 구할까요? -> ");
	scanf("%d", &n);
	if (n < 3) {
		printf("n은 3보다 크거나 같아야합니다.");
		Sleep(700);
		return;
	}
	ans = (n - 1) + (n - 2);
	xy(x, 5); printf("%d번쨰 피보나치 수는 %d 입니다.\n\n\n", n, ans);
	system("pause");

	return;
}

void THI() { //4번
	system("cls");
	int x = 2;

	int temperature;
	int WB;
	double ans;

	xy(x, 2); printf("기온은 몇 도 인가요? -> ");
	scanf("%d", &temperature);
	xy(x, 4); printf("습구온도는 몇 도 인가요? -> ");
	scanf("%d", &WB);
	ans = 0.72 * (temperature + WB) + 40.6;
	xy(x, 7); printf("불쾌지수는 %.4lf 입니다.\n\n\n", ans);
	system("pause");

	return;
}

void BMI() { //5번
	system("cls");
	int x = 2;

	float height_usr;
	float height_final;
	float weight;
	float ans;

	xy(x, 2); printf("키는 몇 cm입니까? -> ");
	scanf("%f", &height_usr);
	xy(x, 4); printf("몸무게는 몇 kg입니까? -> ");
	scanf("%f", &weight);

	height_usr /= 100; //키 단위 cm -> m 변환
	height_final = height_usr * height_usr; //키 제곱하기
	ans = weight / height_final; //최종공식 실행

	xy(x, 7); printf("체질량 지수는 약 %.4f입니다.\n\n\n", ans);
	system("pause");

	return;
}

void InfRate() { //6번
	system("cls");
	int x = 2;

	float basePoint;
	float comparisonPoint;
	float ans;

	xy(x, 2); printf("기준시점물가지수를 입력하세요 -> ");
	scanf("%f", &basePoint);
	xy(x, 4); printf("비교시점물가지수를 입력하세요 -> ");
	scanf("%f", &comparisonPoint);
	ans = ((comparisonPoint - basePoint) / basePoint) * 100;
	xy(x, 7); printf("물가상승률은 %.2f%% 입니다.\n\n\n", ans);
	system("pause");

	return;
}

void COR() { //7번
	system("cls");
	int x = 2;

	float crash_before;
	float crash_after;
	float ans;

	xy(x, 2); printf("충돌 직전의 속도를 입력하세요 -> ");
	scanf("%f", &crash_before);
	xy(x, 4); printf("충돌 직후의 속도를 입력하세요 -> ");
	scanf("%f", &crash_after);
	ans = crash_after / crash_before;
	xy(x, 7); printf("반발계수는 %f 입니다.\n\n\n", ans);
	system("pause");

	return;
}

void Scale() { //8번
	system("cls");
	int x = 2;

	double mapScale;
	double mapCentimeter;
	double distance;

	xy(x, 2); printf("지도의 축척은 몇입니까?(1:n) -> ");
	scanf("%lf", &mapScale);
	xy(x, 4); printf("지도상에서 직선거리가 몇 cm 인가요? -> ");
	scanf("%lf", &mapCentimeter);
	distance = mapScale * mapCentimeter; //지도의 축적 x 지도상의 직선거리
	distance /= 100000; //cm -> km 되면서 0이 5개 감소
	xy(x, 7); printf("실제 거리는 %.2lfKm입니다\n\n\n", distance);
	system("pause");

	return;
}