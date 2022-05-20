//輸入一個圓半徑，計算並輸出圓的面積和周長
#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d,e;
    d = 3.14;
    e = 2;
    cout<<"please input a number as a radius ";
    cin>>a;
    cout<<"the radius is "<<a<<endl;
    b = a*d*e;//周長
    c = a*a*d;//面積
    cout<<"the circumference is "<<b<<endl;
    cout<<"the area is "<<c<<endl;
    return 0;
}
