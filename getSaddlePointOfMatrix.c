#include "getSaddlePointOfMatrix.h"
//获取一行中最大值的列坐标
int getMaxNumberColIndexByRow(int arr[4][4], int rowIndex, int colCount)
{
    int maxNumber = INT_MIN;//int最小值
    int maxColIndex = 0;
    int i;
    for (i = 0; i < colCount; i++)
    {
        if (arr[rowIndex][i] > maxNumber)
        {
            maxNumber = arr[rowIndex][i];
            maxColIndex = i;
        }
    }
    return maxColIndex;
}
//获取一列中最小的值
int getMinNumberByCol(int arr[4][4], int colIndex, int rowCount)
{
    int minNumber = INT_MAX;//int最大值
    int i;
    for (i = 0; i < rowCount; i++)
    {
        if (arr[i][colIndex] < minNumber)
        {
            minNumber = arr[i][colIndex];
        }
    }
    return minNumber;
}

void getSaddlePointOfMatrix(void)
{
    int i, j;
    int rowIndex, colIndex;
    int maxRowNumber = 0;
    int minColNumber = 0;
    int n = 4;
    int isHaveSaddlePoint = 0;
    int arr[4][4] = {
        {1, 7, 4, 1},
        {4, 8, 3, 6},
        {1, 6, 1, 2},
        {0, 7, 8, 9}};

    //判断每一行的最大值是否为该列的最小值
    for (i = 0; i < n; i++)
    {
        colIndex = getMaxNumberColIndexByRow(arr, i, n);
        maxRowNumber = arr[i][colIndex];
        minColNumber = getMinNumberByCol(arr, colIndex, n);
        if (maxRowNumber == minColNumber)
        {
            isHaveSaddlePoint = 1;
            rowIndex = i;
            break;
        }
    }

    if (isHaveSaddlePoint)
    {
        printf("%d %d\n", rowIndex, colIndex);
    }
    else
    {
        printf("NO\n");
    }
}
