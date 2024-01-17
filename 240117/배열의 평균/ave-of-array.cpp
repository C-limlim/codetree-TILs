#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    int c;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &c);
            arr[i][j] = c;
        }
    }

    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        } 
        printf("%.1f ", sum / 4.0);
    }
    printf("\n");

    int sum_all = 0;
    for (int j = 0; j < 4; j++) {
        int sum_row = 0;
        for (int i = 0; i < 2; i++) {
            sum_row += arr[i][j];
        }
        printf("%.1f ", sum_row/2.0);
        sum_all += sum_row;
    }
    printf("\n");
    printf("%.1f", sum_all / 8.0);
    return 0;
}