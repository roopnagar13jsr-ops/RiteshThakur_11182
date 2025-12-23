#include<stdio.h>
int main()
{
    int n;
    scanf("Enter a number");
    printf("%d",&n);
    if(n%2 == 0)
    {
      printf("Even");
    }
    else{
        printf("odd");
    }
    return 0;
}