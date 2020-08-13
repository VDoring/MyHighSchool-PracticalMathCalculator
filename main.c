#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

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
	int x = 22;

	int isMenu;
	while (1) {
		xy(16, 1); printf("< 2020년 3학년 1학기전용 공식계산기 >");

		xy(x, 4); printf("1. 삼각수/사각수 구하기");
		xy(x, 6); printf("2. n번째 수 구하기");
		xy(x, 8); printf("3. n번쨰 피보나치 수 구하기");
		xy(x, 10); printf("4. 불쾌지수 구하기");
		xy(x, 12); printf("5. 체질량 지수 구하기");
		xy(x, 14); printf("6. 물가 상승률 구하기");
		xy(x, 16); printf("7. 반발계수 구하기");
		xy(x, 18); printf("8. 축적 구하기");
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
		xy(x, 9); printf("%d번쨰 삼각수의 값은 %d 입니다.\n\n\n", n, ans);
		system("pause");
		break;
	case 2:
		xy(x, 7); printf("몇번쨰 사각수를 구할껀가요? -> ");
		scanf("%d", &n);
		ans = n * n;
		xy(x, 9); printf("%d번쨰 사각수의 값은 %d 입니다.\n\n\n", n, ans);
		system("pause");
	default:
		break;
	}

	return;
}

void nNum() { //2번
	system("cls");
	int x = 2;

	int n;
	int d;
	int ans = 0;

	xy(x, 2); printf("몇번쨰 수를 확인하고 싶나요?");
	xy(x, 3); printf("-> ");
	scanf("%d", &n);
	xy(x, 5); printf("공차의 값은 무엇인가요?");
	xy(x, 6); printf("-> ");
	scanf("%d", &d);
	ans = n + (n + 1) * d;
	xy(x, 8); printf("%d번쨰 수는 %d 입니다.\n\n\n", n, ans);
	system("pause");

	return;
}

void nPibo() { //3번

}

void THI() { //4번

}

void BMI() { //5번

}

void InfRate() { //6번

}

void COR() { //7번

}

void Scale() { //8번

}