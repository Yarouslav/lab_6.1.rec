#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale>
using namespace std;

// ������� ��� ��������� ������
void create(int t[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        t[i] = rand() % 22 - 14; // �������� ��������� ����� � ������� [-14, 7]
    }
}

// ������� ��� ���������� ������� �� ���� ��������, �� ������������� �������
void calculateCriteria(int t[], int size, int& count, int& totalSum) {
    for (int i = 0; i < size; i++) {
        if (t[i] > 0 && i % 4 != 0) {
            count++;
            totalSum += t[i];
        }
    }
}

// ������� ��� ����� ������ ��������, �� ������������� �������
void replaceWithZeros(int t[], int size) {
    for (int i = 0; i < size; i++) {
        if (t[i] > 0 && i % 4 != 0) {
            t[i] = 0;
        }
    }
}

// ������� ��� ��������� ������ �� �����
void print(const int t[], int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    const int size = 20;
    int t[size];

    create(t, size);

    cout << "������������ �����: ";
    print(t, size);

    int count = 0, totalSum = 0;
    calculateCriteria(t, size, count, totalSum);
    cout << "�i���i��� �������i�, ��i ������������� ������i�: " << count << endl;
    cout << "���� ��������, �� ������������� �������: " << totalSum << endl;

    replaceWithZeros(t, size);

    cout << "������������� ����� ���� �����: ";
    print(t, size);

    return 0;
}
