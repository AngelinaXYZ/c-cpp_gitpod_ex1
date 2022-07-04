//題目: 主函式輸入 輸入 a ， 其中自定義一函式，時間換算，輸出小時 b 小時 c 分

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"please enter the total minutes ";
    cin>>a;
    b=a/60;
    c=a%60;
    
    cout<<"It's the same as "<<b<<" hours and "<<c<<" miuntes";
    
    return 0;
}
