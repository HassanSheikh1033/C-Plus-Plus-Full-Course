#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows for matrices: ";
    cin >> rows;

    cout << "Enter the number of columns for matrices: ";
    cin >> cols;

    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];

    // Input matrices
    cout << "For Matrix 1" << endl;
    inputMatrix(matrix1, rows, cols);

    cout << "For Matrix 2" << endl;
    inputMatrix(matrix2, rows, cols);

    // Add matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Display matrices and their sum
    cout << "Matrix 1:" << endl;
    displayMatrix(matrix1, rows, cols);

    cout << "Matrix 2:" << endl;
    displayMatrix(matrix2, rows, cols);

    cout << "Sum of Matrices:" << endl;
    displayMatrix(result, rows, cols);

    return 0;
}

