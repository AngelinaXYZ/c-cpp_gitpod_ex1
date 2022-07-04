#include <stdio.h>
int addNumbers(int a, int b); 
int subNumbers(int a, int b); 
int mulNumbers(int a, int b); 
int obeNumbers(int a, int b); 
int main()
{
    int n1,n2,sum,sub,mul,obe;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);  // function call
    printf("sum = %d",sum);
    
    sub = subNumbers(n1, n2);  // function call
    printf("sub = %d \n",sub);
    
    mul = addNumbers(n1, n2);  // function call
    printf("mul = %d \n",mul);
    
    obe = addNumbers(n1, n2);  // function call
    printf("obe = %d \n",obe);
    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;
    
}

int subNumbers(int a, int b)         // function definition   
{
    int result;
    result = a-b;
    return result;
    
}

int mulNumbers(int a, int b)         // function definition   
{
    int result;
    result = a*b;
    return result;
    
}

int obeNumbers(int a, int b)         // function definition   
{
    int result;
    result = a/b;
    return result;
    
}
