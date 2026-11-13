#include <iostream>
using namespace std;

class Number{
private:
int value;

public:
 Number(int v){
   value = v;
 }
 Numeric operator + (Number obj){
    Number temp(0);
    temp.value=value +obj value;
    return temp;
 }
 void display(){
    cout<< "Value ="<< value << endl;

 }
};

int main(){
    Number n1(10),n2(20),n3(0);
    n3=n1+n2
    n3.display();
    return 0;
}