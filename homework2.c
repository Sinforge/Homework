#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI		3.14159265358979323846
int main() {
	setlocale(LC_ALL, "Rus");
	int num, N;
	double R, r, h, x, a, l, b, y;
	printf("Добро пожаловать в домашнюю работу номер 2 \nВыберите номер задания\n");
	printf("Задания: \n");
	printf("1)Конус\n2)Разветвление\n3)Функция\n4)Порядок\n5)Табуляция\n");
	scanf_s("%d", &num);
	while (num) {
		switch (num) {
		case 1:
			printf("Введите R, r, h \n");
			scanf_s("%lf%lf%lf", &R, &r, &h);
			if (R == 0 || r == 0 || h == 0 || R - r < 0) {
				printf("Неправильно введены данные \n");
			}
			else {
				l = sqrtf(pow(R - r, 2) + pow(h, 2));
				printf("V = %lf \n", 1.0 / 3.0 * M_PI * h * (pow(R, 2) + R * r + pow(r, 2)));
				printf("S = %lf \n", M_PI * (R * R + (R + r) * l + r * r));
			printf("Если хотите выйти, введите 0, если хотите посмотреть задание, введите его номер(1-5)\n\n\n");
			scanf_s("%d", &num);
			}
			break;
		case 2:
			printf("Введите x и a \n");
			scanf_s("%lf%lf", &x, &a);
			if (abs(x) < 1) {
				printf("w = %lf \n", a * log(abs(x)));
			}
			else {
				if (a - x * x >= 0) {
					printf("w = %lf\n", sqrtf(a - x * x));
				}
				else {
					printf("Подлогарифмическое выражение меньше нуля\n");
				}
			}
			printf("Если хотите выйти, введите 0, если хотите посмотреть задание, введите его номер(1-5)\n\n\n");
			scanf_s("%d", &num);
			break;
		case 4:
			printf("Введите N\n");
			scanf_s("%d", &N);
			for (int i = N; i < N + 10; i++) {
				printf("%d ", i);
			}
			printf("\nЕсли хотите выйти, введите 0, если хотите посмотреть задание, введите его номер(1-5)\n\n\n");
			scanf_s("%d", &num);
			break;
		case 3:
			printf("Введите x, y, b\n");
			scanf_s("%lf%lf%lf", &x, &y, &b);
				if (b - y > 0 && b - x >= 0) {
					printf("z = %lf\n", log(b - y) * sqrtf(b - x));
				}
				else {
					printf("Нет решения\n");
				}
				printf("Если хотите выйти, введите 0, если хотите посмотреть задание, введите его номер(1-5)\n\n\n");
				scanf_s("%d", &num);
				break;


		case 5:
			for (double j = -4.0; j <= 4; j += 0.5) {
				if (j - 1 == 0) {
					printf("При x = %lf нет решения\n", j);
				}
				else {
					printf("При x = %lf y = %lf\n", j, (double)(j * j - 2 * j + 2) / (j - 1));
				}
			}
			printf("Если хотите выйти, введите 0, если хотите посмотреть задание, введите его номер(1-5)\n\n\n");
			scanf_s("%d", &num);
			break;



			}

		}
		
	}
