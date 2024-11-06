#include <iostream>
#include <cmath>

using namespace std;

class Vector{
//属性
private:
    int x,y;

public:
//构造函数
    Vector(int _x,int _y){
        x=_x;
        y=_y;
    }

//相加
    Vector add(Vector v){
        return Vector(x+v.x,y+v.y);
    }

//打印
    void print(){
        cout << "(" << x << "," << y << ")" << endl;
    }

//取模
    double length(){
        return sqrt(x*x+y*y);
    }
};

//测试函数
int main(void){
    Vector v1(3,4);
    Vector v2(5,12);
    Vector v3=v1.add(v2);
    v3.print();
    cout << v3.length() << endl;
    return 0;
}