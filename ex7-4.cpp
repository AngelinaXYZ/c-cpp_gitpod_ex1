//題目: 主函式輸入 輸入 a 小時 b 分， 其中自定義一函式，時間換算，輸出  x 分

#include <iostream>
using namespace std;
int main()
{
    int a,b,m,x;
    cout<<"please enter hours ";
    cin>>a;
    cout<<"please enter minutes ";
    cin>>b;
    m=a*60;
    x=m+b;
    cout<<"the total is "<<x<<" miuntes";
    
    return 0;
}
