#include <iostream>
using namespace std;

struct Rectangle
{
    // private:
    int width;
    int length;

public:
    Rectangle() {}
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
    }
    int area()
    {
        return width * length;
    }
    void setValues(int w, int l)
    {
        width = w;
        length = l;
    }
    void setWidth(int w)
    {
        width = w;
    }
    void setLength(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle recta;
    recta.setValues(10, 20);
    cout << "Area of rectangle: " << recta.area() << endl;
    Rectangle rectb(20, 30);
    cout << "Area of rectangle: " << rectb.area() << endl;
    Rectangle rectc;
    rectc.setWidth(40);
    rectc.setLength(20);
    cout << "Area of rectangle: " << rectc.area() << endl;
    return 0;
}