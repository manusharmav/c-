#include <iostream>
using namespace std;
class rectangle
{
private:
float length;
float width;
public:
   void setdimensions(float l, float w)
    {
         length = l;
         width = w;
    }
    float area()
    {
        return length * width;
    }
    float perimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{1
    rectangle rect;
    cout << "enter length and width of rectangle: ";
    float l, w;
    cin >> l >> w;
    rect.setdimensions(l,w);
    cout << "area of rectangle is: " << rect.area() << endl;
    cout << "perimeter of rectangle is: " << rect.perimeter() << endl;
    return 0;
}