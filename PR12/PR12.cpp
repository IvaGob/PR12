#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

template <typename T>
class Rectangle {
public:
    // ���� �����
    T height; // ������ ������������
    T width; // ������ ������������
    Rectangle() { // ����������� ��� ���������
        height = 0;
        width = 0;
    }
    Rectangle(T a, T b) { // ����������� � �����������
        height = a;
        width = b;
    }
    // ���������� �����
    ~Rectangle() {
        // ͳ���� �� ������
    }
    // �������� ������������
    Rectangle& operator=(const Rectangle& r) {
        height = r.height;
        width = r.width;
        return *this;
    }
    //����������� �����
    T Area() {
        return height * width;
    }

    // �������� ��������-���������
    friend std::istream& operator>>(std::istream& in, Rectangle& r);
    friend std::ostream& operator<<(std::ostream& out, const Rectangle& r);
};

int main()
{
    system("chcp 1251");
    Rectangle<int> sq1;
    Rectangle<float> sq2;
    Rectangle<double> sq3;
    cout << "������ ������ � ������ ������������ (int):\n";
    cin >> sq1.height;
    cin >> sq1.width;
    cout << "������ ������ � ������ ������������ (float):\n";
    cin >> sq2.height;
    cin >> sq2.width;
    cout << "������ ������ � ������ ������������ (double):\n";
    cin >> sq3.height;
    cin >> sq3.width;
    cout << "������ ������������(int)" << sq1.Area() << endl;
    cout << "������ ������������(float)" << sq2.Area() << endl;
    cout << "������ ������������(double)" << sq3.Area() << endl;

    ofstream outf("Dialogue.txt");
    if (outf) {
        outf << "������ ������ � ������ ������������ (int):\n";
        outf << sq1.height << endl;
        outf << sq1.width << endl;
        outf << "������ ������ � ������ ������������ (float):\n";
        outf << sq2.height << endl;
        outf << sq2.width << endl;
        outf << "������ ������ � ������ ������������ (double):\n";
        outf << sq3.height << endl;
        outf << sq3.width << endl;
        outf << "������ ������������(int)" << sq1.Area() << endl;
        outf << "������ ������������(float)" << sq2.Area() << endl;
        outf << "������ ������������(double)" << sq3.Area() << endl;
    }
    return 0;
}
