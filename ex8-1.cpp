#include <iostream>
using namespace std;
int main()
{
    int b = 0;
    int a[] = {3,6,1,2,7};
    
    int *p;
    cout<<"please b number ";
    scanf("%d",&b);
    printf("b = %d \n",b);
    printf("&b = %x \n",&b);
    
    p = &b;
    printf("b = %d \n",*p); //取值
    printf("b = %x \n",p);  //地址
    
    cout<<endl<<"Hello World";
    
    return 0;
}
