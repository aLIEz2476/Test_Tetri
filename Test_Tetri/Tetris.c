#include <stdio.h>
#include <string.h>
#define W_MAX 12
#define H_MAX 33
int main(void)
{
	int sel = 0;
	char Board[W_MAX][H_MAX] = { {'0',}, };
	memset(Board, 0, sizeof(char)*W_MAX*H_MAX);
	printf("T_E_T_R_I_S\n�� �� ������ �� �� �ϼ��� 1���� �ο��Ǹ�, 100�� �޼��� Ŭ���� �޽����� �Բ� �ڵ����� ����˴ϴ�.\n\n");
	printf("������ �����Ͻ÷��� 1�� �Է��ϼ��� : ");
	scanf("%d", &sel);
	if (sel == 1)
	{

		for (int i = 0; i < H_MAX; i++)
		{
			for (int j = 0; j < W_MAX; j++)
			{
				Board[j][i] = (int)0;
			}
			Board[W_MAX - 1][i] = '\n';
		}

		for (int i = 0; i < H_MAX; i++)
		{
			for (int j = 0; j < W_MAX; j++)
			{
				printf("%c", Board[W_MAX - 1][H_MAX - 1]);
			}

		}

	}
	else
		printf("\n1�� �ƴ� ���� �ԷµǾ����Ƿ� ���� ������ �����մϴ�.\n\n");
	
	return 0;

}