#include <iostream>
using namespace std;
int main()
{
    int a[6] = {8,3,6,10,45,12};
    int b[6] = {0,1,2,0,1,2};
    int i,n,j,m;
    
    n = sizeof(a)/sizeof(int);
    for(i=0;i<n;i++){
        printf("a[%d] = %d \n",i,a[i]);
    }
    m = sizeof(a)/sizeof(int);
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
        printf ("b[%d] = %d \n",j,b[j]);    
        }
    
        
        
    cout<<"Hello World";
    
    return 0;
}
