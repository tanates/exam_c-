
#include <iostream> 
#include <string>
using namespace std;

class Vehicle 
{
protected: 
    int cost;
    int speed;
    int year;
public:
    Vehicle() : cost(0), speed(0), year(0) {} //конструктор
    Vehicle(int c, int s, int y) : cost(c), speed(s), year(y) {}
    virtual void getdata() = 0; // чисто виртуальная функция
    virtual void setdata() = 0; // теперь класс абстрактный
};

class Plane : public Vehicle //класс потомок наследует поля данных и методы
{
private: //свои поля данных + наследованные     (int cost;     int speed;     int year; )
    int height;
    int passenger;
public:
    Plane() : height(0), passenger(0) {} //конструктор
    Plane(int h, int p) : height(h), passenger(p) {}
    void getdata() // ввод данных в поля данных
    {
        cout << "Введите информацию о самолёте " << endl;
        cout << "Введите цену "; cin >> cost;
        cout << "Введите скорость "; cin >> speed;
        cout << "Год выпуска "; cin >> year;
        cout << "Введите высоту "; cin >> height;
        cout << "Введите пассижироёмкость "; cin >> passenger;
    }
    void setdata() // вывод данных
    {
        cout << "Информация о самолёте " << endl;
        cout << "Цена  " << cost << endl;
        cout << "Скорость " << speed << endl;
        cout << "Год изготовления " << year << endl;
        cout << "Высота " << height << endl;
        cout << "Пассажироёмкость " << passenger << endl;
    }
};

class Ship : public Vehicle 
{
private:
    int ship_pas;
    string str;
public:
    Ship() : ship_pas(0) {}
    Ship(int s) : ship_pas(s) {}
    void getdata() 
    {
        cout << "Введите информацию о корабле " << endl;
        cout << "Введите цену "; cin >> cost;
        cout << "Введите скорость "; cin >> speed;
        cout << "Год выпуска "; cin >> year;
        cout << "Введите пассажироёмкость "; cin >> ship_pas;
        cout << "Введите порт прописки "; getline(cin, str);
    }
    void setdata() 
    {
        cout << "Информация о корабле " << endl;
        cout << "Цена  " << cost << endl;
        cout << "Скорость " << speed << endl;
        cout << "Год изготовления " << year << endl;
        cout << "Пассажироёмкость судна " << ship_pas << endl;
        cout << "Порт прописки " << str << endl;
    }
};

class Auto : public Vehicle
{
private:
    int cylender;
    string mark;
public:
    Auto() : cylender(0) {}
    Auto(int c) : cylender(c) {}
    void getdata()
    {
        cout << "Введите информацию об автомобиле " << endl;
        cout << "Введите цену "; cin >> cost;
        cout << "Введите скорость "; cin >> speed;
        cout << "Год выпуска "; cin >> year;
        cout << "Введите количество цилиндров "; cin >> cylender;
        cout << "введите марку авто "; cin >> mark;
    }
    void setdata()
    {
        cout << "Информация об автомобтле" << endl;
        cout << "Цена  " << cost << endl;
        cout << "Скорость " << speed << endl;
        cout << "Год изготовления " << year << endl;
        cout << "Количество цилиндров в автомобиле " << cylender << endl;
        cout << "Торговая марка " << mark << endl;
    }
};

int main()
{
    setlocale(0, "rus");

    Plane p1; 
    Auto a1;
    Ship s1;

    p1.getdata();
    cout << endl;
    a1.getdata();
    cout << endl;
    s1.getdata();
    cout << endl << endl;

    p1.setdata(); 
    cout << endl;
    a1.setdata(); 
    cout << endl;
    s1.setdata(); 
    system("Pause");

    return 0;
}