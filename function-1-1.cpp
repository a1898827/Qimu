int sum_diagonal(int array[4][4]) {
    int diagonalSum = 0;
  
    for (int i = 0; i < 4; ++i) {
        diagonalSum += array[i][i];
    }

    return diagonalSum;
}