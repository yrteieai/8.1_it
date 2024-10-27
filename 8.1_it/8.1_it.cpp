#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// Функція для знаходження індексу третьої крапки в рядку
int FindThirdDot(const char* str) {
    int dotCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // Повертаємо індекс третьої крапки
            }
        }
    }
    return -1; // Повертаємо -1, якщо третя крапка не знайдена
}

// Функція для заміни кожного четвертого символу крапкою
void ReplaceEveryFourthChar(char* str) {
    for (int i = 3; str[i] != '\0'; i += 4) {
        str[i] = '.'; // Заміна кожного четвертого символу крапкою
    }
}

// Головна функція
int main() {
    char str[101];
    cout << "Enter string (up to 100 characters):" << endl;
    cin.getline(str, 101);

    // Виклик функції для пошуку третьої крапки
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "Third dot not found in the string." << endl;
    }

    // Виклик функції для заміни кожного четвертого символу крапкою
    ReplaceEveryFourthChar(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
