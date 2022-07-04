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
    printf("&b = %x \n",p);  //地址
    
    printf("a[0] = %d \n",a[0]);
    printf("a[1] = %d \n",a[1]);
    printf("&a[0] = %x \n",&a[0]);
    printf("&a[0] = %x \n",a);
    
    p=a;
    printf("a[0] = %d \n",*p);
    printf("a[1] = %d \n",*(p+1));
    cout<<endl<<"Hello World";
    
    return 0;
}
