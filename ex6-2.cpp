//輸入兩個數，再輸入兩數之和，如果正確，顯示right，否則顯示wrong
#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"please input a number "; 
    cin>>a;
    cout<<"please input another number \t"; 
    cin>>b;
    cout<<"please input their sum ";
    cin>>c;
    
    d = a + b;
    
    if (c==d)
    cout<<"right";
    else
    cout<<"wrong";
    return 0;
}
