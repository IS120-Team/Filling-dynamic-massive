// Filling dynamic massive
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int rows;

    cout << "�������, ������� ����� ����� � �������" << endl;
    cin >> rows;

    int* arr = new int[rows];

    cout << "������� �����, ������� ����� ��������� ��� ������" << endl;

    for (int i = 0; i < rows; i++)
    {
        cin >> arr[i];
    }

    cout << "� ����� ������� ������ ���������� �����: ";
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i] << "\t";
    }
    delete[]arr;
}





