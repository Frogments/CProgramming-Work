#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int endGame = 0; //겜 끝내기
    char board[3][3];
    int x, y, k, i, j , winCount_xCol = 0, winCount_yCol = 0, 
                        winCount_xRow = 0, winCount_yRow = 0,
                        winCount_xDiag1 = 0, winCount_yDiag1 = 0,
                        winCount_xDiag2 = 0, winCount_yDiag2 = 0;

    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++) board[x][y] = ' ';
    
    for (k = 1; endGame == 0; k++)
    {
        winCount_xCol = 0, winCount_xRow = 0, winCount_yCol = 0, winCount_yRow = 0,
        winCount_xDiag1 = 0, winCount_yDiag1 = 0, winCount_xDiag2 = 0, winCount_yDiag2 = 0;

        //컴퓨터랑 나랑 번갈아가며 두기
        if (k % 2)
        {
            //좌표 입력받기
            printf("(x,y) 좌표:");
            scanf(" %d %d", &x, &y);

            // 놓은 곳인지 체크
            if (board[x][y] != ' ')
            {
                printf("이미 놓은 곳 입니다.\n");
                continue;
            }
            board[x][y] = 'X';
        }
        else
        {
            // 컴퓨터가 다음 수 결정해서 놓음
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    if (board[i][j] == ' ')
                    {
                        board[i][j] = 'O';
                        i = 3, j = 3;
                    }
        }
        system("clear");

        // 보드 출력
        for (i = 0; i < 3; i++)
        {
            printf("---|---|---\n");
            printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
        }
        printf("---|---|---\n");

        //행 열 승리조건 검사
        for (i = 0; i < 3; i++)
        {
            winCount_xCol = 0, winCount_yCol = 0, winCount_xRow = 0, winCount_yRow = 0;
            for (j = 0; j < 3; j++)
            {
                if (board[j][i] == 'X') winCount_xCol++;
                else if(board[j][i] =='O') winCount_yCol++;
                if (board[i][j] == 'X') winCount_xRow++;
                else if(board[i][j] =='O') winCount_yRow++;
            }
            if (winCount_xCol == 3 || winCount_xRow == 3)
            {
                printf("X가 이겼습니다!\n");
                return 0;
            }
            else if (winCount_yCol == 3 || winCount_yRow == 3)
            {
                printf("O가 이겼습니다!\n");
                return 0;
            }
        }

        //대각선 승리조건 검사
        for (i = 0; i < 3; i++)
        {
            if (board[i][i] == 'X') winCount_xDiag1++;
            else if (board[i][i] == 'O') winCount_yDiag1++;
            if (board[i][2-i] == 'X') winCount_xDiag2++;
            else if (board[i][2-i] == 'O') winCount_yDiag2++;
        }
        if (winCount_xDiag1 == 3 || winCount_xDiag2 == 3)
        {
            printf("X가 이겼습니다!\n");
            return 0;
        }
        if (winCount_yDiag1 == 3 || winCount_yDiag2 == 3)
        {
            printf("O가 이겼습니다!\n");
            return 0;
        }
        sleep(1);
    }
    return 0;
}