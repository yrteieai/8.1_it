#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ������� ��� ����������� ������� ������ ������ � �����
int FindThirdDot(const char* str) {
    int dotCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // ��������� ������ ������ ������
            }
        }
    }
    return -1; // ��������� -1, ���� ����� ������ �� ��������
}

// ������� ��� ����� ������� ���������� ������� �������
void ReplaceEveryFourthChar(char* str) {
    for (int i = 3; str[i] != '\0'; i += 4) {
        str[i] = '.'; // ����� ������� ���������� ������� �������
    }
}

// ������� �������
int main() {
    char str[101];
    cout << "Enter string (up to 100 characters):" << endl;
    cin.getline(str, 101);

    // ������ ������� ��� ������ ������ ������
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "Third dot not found in the string." << endl;
    }

    // ������ ������� ��� ����� ������� ���������� ������� �������
    ReplaceEveryFourthChar(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
