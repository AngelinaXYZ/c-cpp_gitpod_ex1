//輸入你和你朋友的年齡，判斷誰的年齡最大，並列印最大者的年齡
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"please input your age "; 
    cin>>a;
    cout<<"please input your friend's age \t"; 
    cin>>b;
    
    if (a>=b)
    cout<<"The elder is you.And you are "<<a<<" years old."<<endl;
    else
    cout<<"The elder is your friend. And he/she is "<<b<<" years old.\t";
    return 0;
}
