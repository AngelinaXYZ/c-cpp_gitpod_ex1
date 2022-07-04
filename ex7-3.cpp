//題目: 主函式輸入 高與寬，編寫程式，其中自定義一函式，算矩形面積

#include <iostream>
using namespace std;
int main()
{
    int l,w,area;
    cout<<"How long is the length of the rectangle? ";
    cin>>l;
    cout<<"How long is the width of the rectangle? ";
    cin>>w;
    area = l*w;
    cout<<"The area of the rectangle is "<<area;
    
    return 0;
}
