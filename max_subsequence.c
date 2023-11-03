#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    int max = 0;
    int sum = 0;
    for (int k = 1; k < n; k++)
    {
        for (int i = 0; i < n - k; i++)
        {
            for (int j = i; j < i + k + 1; j++)
                sum += a[j];
            
            if(sum > max) max = sum;
            sum = 0;
        }
    }
    
    printf("%d", max);

    return 0; 
}