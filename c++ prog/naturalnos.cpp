#include <iostream>

int main()
{
    char ch;

    printf("a Addition\n");
    printf("b Substraction\n");
    printf("enter your choice");
    scanf("%c",&ch);
    int a[2][3], b[2][3], s[2][3];
    switch(ch)
    {
        case 'a': 
                printf("Enter the values of matrix 1\n");
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                     scanf("%d", &a[i][j]);
                    }
                }
                printf("Enter the values of matrix 2\n");  
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0 ; j < 3; j++)
                    {
                        scanf("%d", &b[i][j]);
                    }
                }                  
                
                printf("Sum of given matrices=\n");
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0 ; j < 3; j++) 
                    {                    
                        s[i][j] = a[i][j] + b[i][j];
                        printf("%d\t", s[i][j]);
                    }                
                }
                printf("\n");
        case 'b':  printf("wrong choice");    
       
    }
    return 0;
}