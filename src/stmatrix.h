#ifdef STMATRIX_H
#define STMATRIX_H

typedef struct
{
    int rows;
    int cols;
    double **data;
    double data[][]; // <-- check this later to see if this is possible
} STMATRIX;

// char[3] will be int or ptr to identify if the data will be pointers or just a normal arry
//may have to remove it and just stick to a normal array or a array or pointers
STMATRIX NewMatrix (int rows, int cols, char[3]); 

void PrintMatrix (STMATRIX matrix);

void SwapRows (STMATRIX matrix, int row1, int row2);

void SwapCols (STMATRIX matrix, int col1, int col2);

double Determinant (STMATRIX matrix);

bool IsSquare (STMATRIX matrix);

bool IsLinearIndependent (STMATRIX matrix);

bool IsZeroMatrix (STMATRIX matrix);

//might switch some methods below to return void instead of returning a new matrix

STMATRIX ReducdedRowEchelonForm (STMATRIX matrix);

STMATRIX AddSubMatrices (STMATRIX matrix1, STMATRIX matrix2, bool add);

STMATRIX MultiplyMatrices (STMATRIX matrix1, STMATRIX matrix2);

STMATRIX TransposeMatrix (STMATRIX matrix);

STMATRIX RotateMatrix90 (STMATRIX matrix, bool clockwise);

#endif STMATRIX_H