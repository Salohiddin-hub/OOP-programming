#include <iostream>
#include <vector>

using namespace std;

// Matritsa sinfi
class Matrix {
private:
    int rows, cols;
    vector<vector<int>> data;

public:
    // Konstruktor
    Matrix(int r = 0, int c = 0) : rows(r), cols(c) {
        data.resize(rows, vector<int>(cols, 0));
    }

    // Matritsani ekrandan kiritish
    void input() {
        cout << rows << "x" << cols << " o'lchamli matritsa elementlarini kiriting:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    // Matritsani ekranga chiqarish (display)
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Matritsalarni qo'shish (Add)
    Matrix add(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            cout << "Xatolik: Matritsalar o'lchami teng emas!\n";
            return Matrix(0, 0);
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Matritsalarni ayirish (Sub)
    Matrix sub(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            cout << "Xatolik: Matritsalar o'lchami teng emas!\n";
            return Matrix(0, 0);
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    int r, c;
    cout << "Matritsalar o'lchamini kiriting (satr va ustun): ";
    cin >> r >> c;

    // Mat: A va Mat: B matritsalarini yaratamiz
    Matrix MatA(r, c);
    Matrix MatB(r, c);

    cout << "\n--- Matritsa A ---\n";
    MatA.input();

    cout << "\n--- Matritsa B ---\n";
    MatB.input();

    // Qo'shish va ayirish amallari (Add, Sub)
    Matrix MatAdd = MatA.add(MatB);
    Matrix MatSub = MatA.sub(MatB);

    cout << "\n--- Matritsa A ---\n";
    MatA.display();

    cout << "\n--- Matritsa B ---\n";
    MatB.display();

    cout << "\n--- Natija: A + B (Add) ---\n";
    MatAdd.display();

    cout << "\n--- Natija: A - B (Sub) ---\n";
    MatSub.display();

    return 0;
}
