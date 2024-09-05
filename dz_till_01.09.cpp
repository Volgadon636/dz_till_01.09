// dz_till_01.09.cpp

#include <iostream>
using namespace std;
void _max(int** mas, int* max, int* ind,int n, int m) {
    int sum;
    for (int j = 0; j < n; ++j) {
        sum = 0;
        for (int i = 0; i < m; ++i) { sum += mas[j][i];}
        if (sum > *max) {
            *max = sum;
            *ind = j;
        }
    }
}
int main()
{

    {
        cout << "\n\tExersice 1\n\n\n";
        int size;
        cin >> size;

        int** mas = new int* [size];
        for (int i = 0; i < size; ++i) {
            mas[i] = new int[size];
        }
        for (int j = 0; j < size; ++j) {
            for (int i = 0; i < size; ++i) {
                cin >> mas[j][i];
            }
        }

        int c = 0;
        for (int j = 0; j < size; ++j) {
            for (int i = j; i < size; ++i) {
                if (mas[j][i] == mas[i][j]) c += 1;
            }
        }
        //счетчик кол-ва совпадений
        int f = 0;
        for (int i = 1; i <= size; ++i) f += i;

        if (c == f)  cout << "\nYES\n";
        else cout << "\nNO\n";
    }
    system("pause");
    {
        cout << "\n\tExersice 2\n\n\n";
        int size1,size2,size_1t,size_2t;
        cin >> size1>>size2;

        int** mas = new int* [size1];
        for (int i = 0; i < size1; ++i) {
            mas[i] = new int[size2];
        }
        int** mas2= new int* [size2];
        for (int i = 0; i < size2; ++i) {
            mas2[i] = new int[size1];
        }
        for (int j = 0; j < size1; ++j) {
            for (int i = 0; i < size2; ++i) {
                cin >> mas[j][i];
            }
        }
        cout << "\n\n";
        int c = 0;
        for (int j = 0,g = size1 - 1; j < size1; ++j,--g) {
            for (int i = 0; i < size2; ++i) {
                mas2[i][j] = mas[g][i];
            }
        }
        size_1t = size2;
        size_2t = size1;
        cout << size_1t << ' ' << size_2t <<"\n";
        for (int j = 0; j < size2; ++j) {
            for (int i = 0; i < size1; ++i ){
                cout << mas2[j][i] << ' ';
            }
            cout << "\n";
        }
    }
    
    
    system("pause");
    {
        cout << "\n\tExersice 3\n\n\n";
        int n, m;
        cin >> n >> m;

        int** mas = new int* [n];
        for (int i = 0; i < n; ++i) {
            mas[i] = new int[m];
        }

        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                cin >> mas[j][i];
            }
        }
        cout << "\n\n";
        int max = INT_MIN, ind = 0;
        _max(mas, &max, &ind, n, m);
        cout << "max is " << max << endl;
        cout << "index is " << ind << endl;

    }
}
