
#include <stdio.h>
#include <string.h>
 
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
 
// Driver program to test above function
int main()
{
    int n;
    printf("Enter the length of string : ");
    scanf("%d",&n);
    char str[n+1];
    printf("ENTER THE STRING : ");
    for (int i = 0; i < n+1; i++)
    {
        scanf("%c",&str[i]);
    }
    isPalindrome(str);
    return 0;
}