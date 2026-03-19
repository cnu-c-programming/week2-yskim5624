#include <stdio.h>

int main()
{
    int n, count=0;

    scanf("%d", &n);
    for(int i=2; i<n; i++) {
        if(n%i==0) count++;
    }
    if(count==0) printf("true");
    else if(n==0 || n==1) printf("false");
    else printf("false");
    
    return 0;
}
