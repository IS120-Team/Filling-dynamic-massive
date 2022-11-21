// Filling dynamic massive
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int rows;

    cout << "¬ведите, сколько будет чисел в массиве" << endl;
    cin >> rows;

    int* arr = new int[rows];

    cout << "¬водите числа, которые будут заполн€ть ваш массив" << endl;

    for (int i = 0; i < rows; i++)
    {
        cin >> arr[i];
    }

    cout << "¬ вашем массиве сейчас содержатс€ числа: ";
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i] << "\t";
    }
    delete[]arr;
}





