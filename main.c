#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    int num1 = -12345;
    int num2 = 0;
    char *str_num1 = ft_itoa(num1);
    char *str_num2 = ft_itoa(num2);
    
    printf("--- Testing ft_itoa ---\n");
    printf("Expected: -12345 | Result: %s\n", str_num1);
    printf("Expected: 0      | Result: %s\n\n", str_num2);
    
    free(str_num1);
    free(str_num2);

    char *s1 = "Hello ";
    char *s2 = "42 Amman!";
    char *joined = ft_strjoin(s1, s2);
    
    printf("--- Testing ft_strjoin ---\n");
    printf("Result: %s\n\n", joined);
    
    free(joined);

    printf("--- Testing ft_calloc ---\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        printf("Checking if initialized to 0: ");
        for (int i = 0; i < 5; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }
    
    return (0);
}
