#include <iostream>
#include <iomanip>

using namespace std;


/*Dynamically allocates the space for storing matrix data.
 * The fragmented memory allocation is required in this assignment.*/

int** init(int rows, int cols, int default_value=0){
    int** matrix = new int*[rows];
    //this double pointer points to the array of pointers, where each single pointer points to separate row
    //this double pointer allows rows to be allocated separately in memory
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        //this matrix[i] is a pointer to an array of integers, that are its column values
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = default_value;
            //we initialize all values immediately to zero, so we avoid garbage values
            // or any error that can happen from not initializing
        }
    }
    return matrix;
}

/* Releases the space after matrix is not required anymore.
 * All arrays should be properly deleted.*/
void dealloc(int **p, int rows){
        for (int i = 0; i < rows; i++) {
            delete[] p[i];
            //we are first deleting arrays to what the p points
            //that is, we are deleting columns to which each row has pointed
        }
        delete[] p;
        //then, we are deleting pointers to the row values
}

/*creates a new dynamically allocated matrix that is a sum of matrices a
 * and b. If matrices are not suitable for addition it should return nullptr*/
int** sum(int **a, int arows, int acols, int **b, int brows, int bcols){
        if (arows != brows || acols != bcols) return nullptr;
        //if the matrices don't have the same number of rows and columns, then just return nullptr
        int** result = init(arows, acols);
        //this will be the new matric where we will store the result
        for (int i = 0; i < arows; i++) {
            for (int j = 0; j < acols; j++) {
                result[i][j] = a[i][j] + b[i][j];
                //here, we just sum up the values from the two matrices who were sent as parameters
            }
        }
        return result;
}

/*create a new matrix that is transposed matrix of the matrix a.
 * Rows become columns, and vice versa*/
int** transpose(int **a, int rows, int cols){
        int** result = init(cols, rows);
        //create a new matric that will store the result
        //and, as you can see, for row paramater, we are sending number of cols, and vice versa
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = a[i][j];
                //add new values to a new matric bc previously only zeroes were there
            }
        }
        return result;
}

/*creates a new matrix which is multiply of a and scalar*/
int** scalar_multiply(int **a, int rows, int cols, int scalar){
    int** result = init(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] * scalar;
        }
    }
    return result;
}

/*create new matrix that is multiply of matrix a and matrix b.
 * If matrices are not suitable for multiplication nullptr should be returned.*/
int** multiply(int **a, int arows, int acols, int **b, int brows, int bcols){
    if (acols != brows) return nullptr;
    //number of rows of one matric and columns of the second have to be the same,
    //in order to perform multiplication
    int** result = init(arows, bcols);
    for (int i = 0; i < arows; i++) {
        for (int j = 0; j < bcols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < acols; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

/* calculates a determinant of the matrix a.*/
int determinant(int **a, int rows, int cols){
    if (rows != cols) {
        cout << "You have to have same number of rows and columns." << endl;
        return 0;
    }

    // elementary case for 2x2 matrix
    if (rows == 2) {
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    }

    //all other larger matrics
    int det = 0;
    for (int i = 0; i < cols; i++) {
        int** subMatrix = init(rows - 1, cols - 1);
        for (int j = 1; j < rows; j++) {
            int colIndex = 0;
            for (int k = 0; k < cols; k++) {
                if (k != i) {
                    subMatrix[j - 1][colIndex++] = a[j][k];
                }
            }
        }
        det += (i % 2 == 0 ? 1 : -1) * a[0][i] * determinant(subMatrix, rows - 1, cols - 1);
        dealloc(subMatrix, rows - 1);
    }
    return det;
}

 /*print matrix to standard output properly formatted. Usage of iomanip library is recommended so the output is readable to end user.*/
 void print(int **p, int rows, int cols){
     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
             cout << setw(10) << p[i][j];
         }
         cout << endl;
     }
 }

int main() {
    // Matrix Initialization
    int** matrix1 = init(3, 3, 1);
    int** matrix2 = init(3, 3, 2);

    // Matrix Addition
    int** sumMatrix = sum(matrix1, 3, 3, matrix2, 3, 3);
    cout << "Sum of matrix1 and matrix2:\n";
    print(sumMatrix, 3, 3);

    // Matrix Scalar Multiplication
    int** scalarMultipliedMatrix = scalar_multiply(matrix1, 3, 3, 5);
    cout << "Scalar multiplication of matrix1 by 5:\n";
    print(scalarMultipliedMatrix, 3, 3);

    // Matrix Multiplication
    int** productMatrix = multiply(matrix1, 3, 3, matrix2, 3, 3);
    cout << "Product of matrix1 and matrix2:\n";
    print(productMatrix, 3, 3);

    // Matrix Transposition
    int** transposedMatrix = transpose(matrix1, 3, 3);
    cout << "Transpose of matrix1:\n";
    print(transposedMatrix, 3, 3);

    // Matrix Determinant
    cout << "Determinant of matrix1:\n";
    int det = determinant(matrix1, 3, 3);
    cout << det << endl;

    // Deallocate all matrices
    dealloc(matrix1, 3);
    dealloc(matrix2, 3);
    dealloc(sumMatrix, 3);
    dealloc(scalarMultipliedMatrix, 3);
    dealloc(productMatrix, 3);
    dealloc(transposedMatrix, 3);

    return 0;
}
