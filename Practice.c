#include <stdio.h>

void setArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int t = i + 1; t < size; t++) {
            int x;
            // array[i] の中身と array[t] の中身を交換するために一度 x に入れる
            if (array[i] < array[t]) {
                x = array[i];
                array[i] = array[t];
                array[t] = x;
            }
        }
    }
}

int main() {
    const int SIZE =6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {80, 60, 70, 100, 90, 100};
    //処理コード
    setArray(scores, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }
    return 0;
}