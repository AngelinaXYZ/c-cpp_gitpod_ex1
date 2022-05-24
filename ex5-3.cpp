//圖形
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i++){
        cout<<setw(5);
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
