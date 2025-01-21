/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int* arr;
    int size;

public:
    
	Matrix(int s) 
	{
        size = s;
        arr = new int[size];
    }

    ~Matrix() 
	{
        delete[] arr;
    }
    
    void inputMatrix() {
        cout << "Enter " << size << " elements for the matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void displayMatrix() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(Matrix& m) {
        if (this->size != m.size) {
            cout << "Matrix size mismatch!" << endl;
            exit(0);
        }

        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = this->arr[i] + m.arr[i];
        }
        return result;
    }
};

int main() {
    int size;

    cout << "Enter the size of the 1D matrix: ";
    cin >> size;

    Matrix mat1(size), mat2(size);

    cout << "\nMatrix 1:\n";
    mat1.inputMatrix();
    cout << "\nMatrix 2:\n";
    mat2.inputMatrix();


    cout << "\nMatrix 1: ";
    mat1.displayMatrix();
    cout << "Matrix 2: ";
    mat2.displayMatrix();
    Matrix result = mat1 + mat2;

    cout << "\nResultant Matrix (Matrix 1 + Matrix 2): ";
    result.displayMatrix();

    return 0;
}

