#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void one() {
    cout << "1 задача " << endl << "Введите слово:" << endl;
    char s[80];
    cin >> s;
    int n = strlen(s);
    int k;
    for (int i = 0; i < (n / 2); i++) {
        if (s[i] == s[n - i - 1]) {
            k = 1;
        }
        else {
            k = 0;
            break;
        }
    }
    if (k == 1) {
        cout << "палиндром";
    }
    else {
        cout << "не палиндром";
    }
}
    void two() {
        cout << "2 задача " << endl << "Введите выражение:" << endl;
        char s[80];
        cin >> s;
        int n = strlen(s);
        int counter = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != '+') {
                counter = counter * 10 + (int(s[i]) - 48);

            }
            else {
                sum += counter;
                counter = 0;
            }
        }
        cout << sum + counter;
    }
    void three() {
        cout << "3 задача " << endl << "Введите ФИО:" << endl;
        string a, b, c;
        cin >> a >> b >> c;
        cout << b[0] << '.' << c[0] << ". " << a;
        }

    void four() {
        cout << "4 задача " << endl << "Введите имя файла:" << endl;
        char s[80];
        cin >> s;
        int n = strlen(s);
        for (int i = n - 1; i >= 0; i--) {
            if (s[i]== '.') {
                s[i + 1] = 'b';
                s[i + 2] = 'a';
                s[i + 3] = 'k';
                s[i + 4] = '\0';
            }
        }
       
        cout << s;
    }
    void five() {
        cout << "5 задача " << endl << "Введите слово:" << endl;
        char s[80];
        cin >> s;
        int n = strlen(s);
        cout << 80 / n;
    }
int main()
{
    //setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //one();
    //two();
    //three();
    //four();
    five();
}
