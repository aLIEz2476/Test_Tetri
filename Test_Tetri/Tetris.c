#include <stdio.h>
#include <string.h>
#define W_MAX 12
#define H_MAX 33
int main(void)
{
	int sel = 0;
	char Board[W_MAX][H_MAX] = { {'0',}, };
	memset(Board, 0, sizeof(char)*W_MAX*H_MAX);
	printf("T_E_T_R_I_S\n※ 이 게임은 한 줄 완성시 1점이 부여되며, 100점 달성시 클리어 메시지와 함께 자동으로 종료됩니다.\n\n");
	printf("게임을 시작하시려면 1을 입력하세요 : ");
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
		printf("\n1이 아닌 값이 입력되었으므로 게임 실행을 종료합니다.\n\n");
	
	return 0;

}