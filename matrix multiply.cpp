#include <iostream>
#include <mpi.h>

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    const int matrixSize = 4;  // Adjust matrix size as needed
    const int rowsPerProcess = matrixSize / size;

    int** matrixA = new int*[matrixSize];
    int** matrixB = new int*[matrixSize];
    int** result = new int*[matrixSize];

    for (int i = 0; i < matrixSize; ++i) {
        matrixA[i] = new int[matrixSize];
        matrixB[i] = new int[matrixSize];
        result[i] = new int[matrixSize];
    }

    // Generate matrices A and B
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            matrixA[i][j] = rank * matrixSize + i + j;  // Example initialization
            matrixB[i][j] = rank * matrixSize - i + j;  // Example initialization
        }
    }

    // Perform matrix multiplication locally
    for (int i = 0; i < rowsPerProcess; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < matrixSize; ++k) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Gather results from all processes
    MPI_Gather(result[0], rowsPerProcess * matrixSize, MPI_INT, result[0], rowsPerProcess * matrixSize, MPI_INT, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        std::cout << "Matrix A:" << std::endl;
        printMatrix(matrixA, matrixSize, matrixSize);
        std::cout << "Matrix B:" << std::endl;
        printMatrix(matrixB, matrixSize, matrixSize);
        std::cout << "Resultant Matrix C:" << std::endl;
        printMatrix(result, matrixSize, matrixSize);
    }

    // Clean up
    for (int i = 0; i < matrixSize; ++i) {
        delete[] matrixA[i];
        delete[] matrixB[i];
        delete[] result[i];
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] result;

    MPI_Finalize();
    return 0;
}

