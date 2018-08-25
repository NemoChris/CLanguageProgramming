#include "getSaddlePointOfMatrix.h"
//��ȡһ�������ֵ��������
int getMaxNumberColIndexByRow(int arr[4][4], int rowIndex, int colCount)
{
    int maxNumber = INT_MIN;//int��Сֵ
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
//��ȡһ������С��ֵ
int getMinNumberByCol(int arr[4][4], int colIndex, int rowCount)
{
    int minNumber = INT_MAX;//int���ֵ
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

    //�ж�ÿһ�е����ֵ�Ƿ�Ϊ���е���Сֵ
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
