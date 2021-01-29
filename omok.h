/*
============================================================
                    CMD_Winter Mini Ptj
    1. ��� �� : Starter Season_Winter_Team_A, B
    2. ptj ���� : ����
    3. �ش� ��� ��
        01. ���� ��Ģ �����ֱ�
        02. �ٵ��� ǥ���ϱ�
        03. ȭ��ǥ Ű�� ���� �ٵϵ��� ��ġ�� ����ǰ� �ϰ� �����̽��ٸ� �̿��� �ٵϵ� ����
        04. ������ ���и� ������ �� �ֱ�
============================================================
*/
# ifndef OMOK_H
# define OMOK_H
// Import Header file
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <windows.h>

# define MAX_Scale 19 // �ٵ����� ũ�� ����
# define paint_B printf("��") // �浹 ��¹�
# define paint_W printf("��") // �鵹 ��¹�
# define W 2 // �鵹 ����
# define B 1 // �浹 ����

// Custom Function Declaration
void game_control();
void gotoxy(int x, int y);
void show_stone();
void move_position(char key, int* x1, int* y1, int x_b, int y_b);
void show_map();
// etc...

# endif