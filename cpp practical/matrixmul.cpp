#include <iostream>
using namespace std;

int main()
{
    int m, n, o, p;

    cout << "Enter rows of matrix A: ";
    cin >> m;
    cout << "Enter columns of matrix A: ";
    cin >> n;

    cout << "Enter rows of matrix B: ";
    cin >> o;
    cout << "Enter columns of matrix B: ";
    cin >> p;

    if (n != o)
    {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[m][n], B[o][p], C[m][p];

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < o; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Resultant Matrix C:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
