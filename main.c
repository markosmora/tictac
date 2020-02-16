#include <stdio.h>


void InitializeBoard(int m, int n, char board[][n]);
void PrintBoard(int m, int n, char board[][n]);
void CreateBoard(int m, int n, char[][n]);


int main() {
    printf("Hello, World!\n");
    return 0;
}

void InitializeBoard(int m, int n, char board[][n]){
    int c = 1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            board[i][j] = c + '0';
            c++;
        }
    }
}