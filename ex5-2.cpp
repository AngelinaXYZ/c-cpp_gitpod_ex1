//九九乘法表
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++)
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";
        cout<<"\n";
    }
    return 0;
}
