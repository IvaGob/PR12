#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

template <typename T>
class Rectangle {
public:
    // Поля класу
    T height; // Висота прямокутника
    T width; // Ширина прямокутника
    Rectangle() { // Конструктор без параметрів
        height = 0;
        width = 0;
    }
    Rectangle(T a, T b) { // Конструктор з параметрами
        height = a;
        width = b;
    }
    // Деструктор класу
    ~Rectangle() {
        // Нічого не робити
    }
    // Операція присвоювання
    Rectangle& operator=(const Rectangle& r) {
        height = r.height;
        width = r.width;
        return *this;
    }
    //Знаходження площі
    T Area() {
        return height * width;
    }

    // Операції введення-виведення
    friend std::istream& operator>>(std::istream& in, Rectangle& r);
    friend std::ostream& operator<<(std::ostream& out, const Rectangle& r);
};

int main()
{
    system("chcp 1251");
    Rectangle<int> sq1;
    Rectangle<float> sq2;
    Rectangle<double> sq3;
    cout << "Введіть висоту і ширину прямокутника (int):\n";
    cin >> sq1.height;
    cin >> sq1.width;
    cout << "Введіть висоту і ширину прямокутника (float):\n";
    cin >> sq2.height;
    cin >> sq2.width;
    cout << "Введіть висоту і ширину прямокутника (double):\n";
    cin >> sq3.height;
    cin >> sq3.width;
    cout << "Висота прямокутника(int)" << sq1.Area() << endl;
    cout << "Висота прямокутника(float)" << sq2.Area() << endl;
    cout << "Висота прямокутника(double)" << sq3.Area() << endl;

    ofstream outf("Dialogue.txt");
    if (outf) {
        outf << "Введіть висоту і ширину прямокутника (int):\n";
        outf << sq1.height << endl;
        outf << sq1.width << endl;
        outf << "Введіть висоту і ширину прямокутника (float):\n";
        outf << sq2.height << endl;
        outf << sq2.width << endl;
        outf << "Введіть висоту і ширину прямокутника (double):\n";
        outf << sq3.height << endl;
        outf << sq3.width << endl;
        outf << "Висота прямокутника(int)" << sq1.Area() << endl;
        outf << "Висота прямокутника(float)" << sq2.Area() << endl;
        outf << "Висота прямокутника(double)" << sq3.Area() << endl;
    }
    return 0;
}
