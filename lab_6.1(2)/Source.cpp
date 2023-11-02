#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale>
using namespace std;

// Функція для генерації масиву
void create(int t[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        t[i] = rand() % 22 - 14; // Генеруємо випадкове число в діапазоні [-14, 7]
    }
}

// Функція для обчислення кількості та суми елементів, які задовольняють критерію
void calculateCriteria(int t[], int size, int& count, int& totalSum) {
    for (int i = 0; i < size; i++) {
        if (t[i] > 0 && i % 4 != 0) {
            count++;
            totalSum += t[i];
        }
    }
}

// Функція для заміни нулями елементів, які задовольняють критерію
void replaceWithZeros(int t[], int size) {
    for (int i = 0; i < size; i++) {
        if (t[i] > 0 && i % 4 != 0) {
            t[i] = 0;
        }
    }
}

// Функція для виведення масиву на екран
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

    cout << "Згенерований масив: ";
    print(t, size);

    int count = 0, totalSum = 0;
    calculateCriteria(t, size, count, totalSum);
    cout << "Кiлькiсть елементiв, якi задовольняють критерiю: " << count << endl;
    cout << "Сума елементів, які задовольняють критерію: " << totalSum << endl;

    replaceWithZeros(t, size);

    cout << "Модифікований масив після заміни: ";
    print(t, size);

    return 0;
}
