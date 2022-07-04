//題目: 主函式輸入 輸入a度C，其中自定義一函式，溫度換算，輸出b度F

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"please enter the temperature (Celsius) ";
    cin>>a;
    c=a*9/5;
    b=c+32;
    
    cout<<"It's the same as "<<b<<" degree Fahrenheit";
    
    return 0;
}
