#include <stdio.h>
int main()
{

    int a[3]={6,9,8};
    int i=0;
    int j=0;
    int q;
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            if( a[j+1]>a[j]){
                
                q=a[j];
                a[j]=a[i];
                a[i]=q;
                
                
            }
        }
    }
   
    for ( i=0; i<3; i++){
    printf("%d\n", a[i]);
    }
    
    return 0;
}
