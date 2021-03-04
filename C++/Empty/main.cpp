#include <iostream>
#include <math.h>

using namespace std;

class Triangle {
private:
    int a=0,b=0,c=0;
public:
    Triangle(int v1,int v2,int v3){
        a=v1;
        b=v2;
        c=v3;
    };

    ~Triangle(){
        a=0;
        b=0;
        c=0;
    };

    void perimetr() {
        int p=0;
        p=a+b+c;
        cout << "P=" <<p << endl;
    }

    void square() {
        int p=(a+b+c)/2;
        int S=sqrt(p*(p-a)*(p-b)*(p-c));
        cout << "S=" << S << endl;
    }
};


int main() {
    Triangle obj (4, 3, 5);
    obj.perimetr();
    obj.square();
    return 0;
}
