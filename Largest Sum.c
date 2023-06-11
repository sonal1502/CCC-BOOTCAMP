#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, SUM=0, MAX=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    { SUM+=a[i];
     if(SUM>MAX)
         MAX=SUM;
     if(SUM<0)
         SUM=0;
         
            
           
    }
    printf("%d",MAX);
     
    return 0;
}
