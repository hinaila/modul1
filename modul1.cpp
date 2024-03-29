#include <iostream>
using namespace std;
//Main program
int main()
{
    char op;
    float num1, num2;
    cout<<"Masukkan Operator:";
    cin>>op;
    cout<<"\nMasukkan Bilangan ke-1:";
    cin>>num1;
    cout<<"Masukkan bilangan ke-2:";
    cin>>num2;

    switch(op)
    {
        case '+':
            cout<< num1 + num2;
            break;
        case '-':
            cout<< num1 - num2;
            break;
        default:
            cout<< "Error! operator is not correct";
    } 
return 0;
}

#include <iostream>
using namespace std;

// Deklarasi class
class Rectangle {
private:
    int length;
    int width;

public:
    // Konstruktor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Metode untuk menghitung luas
    int calculateArea() {
        return length * width;
    }

    // Metode untuk mengubah panjang
    void setLength(int l) {
        length = l;
    }

    // Metode untuk mengubah lebar
    void setWidth(int w) {
        width = w;
    }
};

int main() {
    // Membuat objek dari class Rectangle
    Rectangle rect(5, 10);

    // Memanggil metode untuk menghitung luas
    int area = rect.calculateArea();
    cout << "Luas persegi panjang: " << area << endl;

    // Mengubah panjang dan lebar
    rect.setLength(7);
    rect.setWidth(12);

    // Menghitung luas setelah perubahan
    area = rect.calculateArea();
    cout << "Luas persegi panjang setelah perubahan: " << area << endl;

    return 0;
}