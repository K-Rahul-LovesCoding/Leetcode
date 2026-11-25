void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n= matrixSize;
    int temp=0;
    for(int i=0;i<matrixSize;i++){
        for(int j=i+1;j<n;j++){
            temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<matrixSize;i++){
    int m=matrixSize-1;
        for(int j=0;j<matrixSize/2;j++){
            temp=matrix[i][j];
            matrix[i][j]=matrix[i][m];
            matrix[i][m]=temp;
            m--;
        }
    }
}