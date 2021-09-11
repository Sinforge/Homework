#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI		3.14159265358979323846
int main() {
	setlocale(LC_ALL, "Rus");
	int num, N;
	double R, r, h, x, a, l, b, y;
	printf("����� ���������� � �������� ������ ����� 2 \n�������� ����� �������\n");
	printf("�������: \n");
	printf("1)�����\n2)������������\n3)�������\n4)�������\n5)���������\n");
	scanf_s("%d", &num);
	while (num) {
		switch (num) {
		case 1:
			printf("������� R, r, h \n");
			scanf_s("%lf%lf%lf", &R, &r, &h);
			if (R == 0 || r == 0 || h == 0 || R - r < 0) {
				printf("����������� ������� ������ \n");
			}
			else {
				l = sqrtf(pow(R - r, 2) + pow(h, 2));
				printf("V = %lf \n", 1.0 / 3.0 * M_PI * h * (pow(R, 2) + R * r + pow(r, 2)));
				printf("S = %lf \n", M_PI * (R * R + (R + r) * l + r * r));
			printf("���� ������ �����, ������� 0, ���� ������ ���������� �������, ������� ��� �����(1-5)\n\n\n");
			scanf_s("%d", &num);
			}
			break;
		case 2:
			printf("������� x � a \n");
			scanf_s("%lf%lf", &x, &a);
			if (abs(x) < 1) {
				printf("w = %lf \n", a * log(abs(x)));
			}
			else {
				if (a - x * x >= 0) {
					printf("w = %lf\n", sqrtf(a - x * x));
				}
				else {
					printf("������������������ ��������� ������ ����\n");
				}
			}
			printf("���� ������ �����, ������� 0, ���� ������ ���������� �������, ������� ��� �����(1-5)\n\n\n");
			scanf_s("%d", &num);
			break;
		case 4:
			printf("������� N\n");
			scanf_s("%d", &N);
			for (int i = N; i < N + 10; i++) {
				printf("%d ", i);
			}
			printf("\n���� ������ �����, ������� 0, ���� ������ ���������� �������, ������� ��� �����(1-5)\n\n\n");
			scanf_s("%d", &num);
			break;
		case 3:
			printf("������� x, y, b\n");
			scanf_s("%lf%lf%lf", &x, &y, &b);
				if (b - y > 0 && b - x >= 0) {
					printf("z = %lf\n", log(b - y) * sqrtf(b - x));
				}
				else {
					printf("��� �������\n");
				}
				printf("���� ������ �����, ������� 0, ���� ������ ���������� �������, ������� ��� �����(1-5)\n\n\n");
				scanf_s("%d", &num);
				break;


		case 5:
			for (double j = -4.0; j <= 4; j += 0.5) {
				if (j - 1 == 0) {
					printf("��� x = %lf ��� �������\n", j);
				}
				else {
					printf("��� x = %lf y = %lf\n", j, (double)(j * j - 2 * j + 2) / (j - 1));
				}
			}
			printf("���� ������ �����, ������� 0, ���� ������ ���������� �������, ������� ��� �����(1-5)\n\n\n");
			scanf_s("%d", &num);
			break;



			}

		}
		
	}
