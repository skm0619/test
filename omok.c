# include "omok.h"

void game_control(void) {
    // ������ ���и� �������� �Լ�
};

void gotoxy(int x, int y) {
    // ȭ����� Ŀ�� ��ġ�� �ľ��ϰ� �����ϴ� �Լ�
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
};

void show_stone()     // �ٵϵ��� ���� �Լ�
{
	char key; // Ű���� �Է¹޴� ����
	int x = 0, y = 1, x_b = 38, y_b = 20, order = 0; // x, y = x,y��ǥ, x_b,y_b = �� ���� �ִ�, order = �� ���� ���� ���� ����
	int* x1 = &x, * y1 = &y;
	int map[19][19];
	char* stone_color[2] = { "��", "��" };
	//int end = 3;

	gotoxy(x, y);
	show_map();

	while (1)
	{
		gotoxy(x, y);
		key = _getch(); // Ű�Է¹���

		if (key >= 72) // �Է¹��� ���� �̵����̸�
		{
			move_position(key, x1, y1, x_b, y_b); // �����̴� �Լ� ȣ��
		}
		else if (key == 32) // �Է¹��� ���� �����̽����̸�
		{
			printf("%s", stone_color[order]); // ���� ��ǥ��ġ�� ���� ���´�.

			if (order == 0) // ���� �����̶��
			{
				map[y][x] = order; // ���� ��ġ�� 0(���������� �˷���)�� ����
				/*end = game_control();
				if (end == 0) // �浹�� �̱�ٸ� ��ȯ�� 0.
				{
					gotoxy(1, 21);
					printf("�������� �̰���ϴ�.");
					break; // ���ڰ� ������ ����.
				}*/
				order = 1; // ���� ������ ���� �� ����
			}
			else // ���� �Ͼ��̶��
			{
				map[y][x] = order; // ���� ��ġ�� 1(�鵹���� �˷���)�� ����
				/*end = game_control();
				if (end == 1) // �鵹�� �̱�ٸ� ��ȯ�� 1.
				{
					gotoxy(1, 21);
					printf("�鵹�� �̰���ϴ�.");
					break; // ���ڰ� ������ ����.
				}*/
				order = 0; // ���� ������ ���� �� ����
			}
		}
	}

	return 0;
}

void move_position() {
    // ����ڰ� �Է��ϴ� ȭ��ǥ Ű�� ���� ��ǥ x, y���� �����ϴ� �Լ�
};

void show_map() {
    //�ٵ����� �����ִ� �Լ�
};