#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int t=0, maxt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            t++;
        }
        else{
            t=0;
        }
        if(t>maxt){
            maxt=t;
        }
    }
    
    printf("%d",maxt);
    
       
    return 0;
}
