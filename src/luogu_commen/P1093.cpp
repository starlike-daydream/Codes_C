#include<cstdio>
void replace(int score[301][5], int j, int i);
int main(){
    int n;
    scanf ("%d",&n);
    int score [n][5]={0};
    for (int i = 0; i < n; i++) {
        score[i][0] = i + 1;
        for (int j = 1; j <= 3; j++) {
            int score_one;
            scanf ("%d",&score_one);
            score[i][j] = score_one;
            score[i][4] += score_one;
        }
    }
    for (int j = 0; j < n - 1 ; j++) {
        for (int i = j + 1; i < n; i++) {
            if (score[j][4] >= score[i][4]) {
                replace(score, j, i);
            }
        }
    }
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (score[i][4] == score[i + 1][4]) {
                if (score[i][1] > score[i + 1][1]) {
                    replace(score, i, i + 1);
                }
            }
        }
    }
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (score[i][4] == score[i + 1][4]) {
                if (score[i][1] > score[i + 1][1]) {
                    if (score[i][0]<score[i+1][0]) {
                        replace(score, i, i + 1);
                    }
                }
            }
        }
    }
    for (int i = n - 1; i >= n - 5; i--) {
        printf("%d %d\n",score[i][0],score[i][4]);
    }
}

void replace(int score[301][5], int j, int i) {
    for (int k = 0; k <= 4; k++) {
        if (k == 2 || k == 3) continue;
        score[j][k] = score[i][k] ^ score[j][k];
        score[i][k] = score[i][k] ^ score[j][k];
        score[j][k] = score[i][k] ^ score[j][k];
    }
}
