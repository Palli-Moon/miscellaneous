#include <stdio.h>
#include <string.h>

int palindrome(char *s);

int main(int argc, char *argv[]) {
    if (argc != 2)
    {
        printf("Please provide only 1 argument\n");
        return 0;
    }

    if (palindrome(argv[1]))
        printf("\"%s\" is a palindrome\n", argv[1]);
    else
        printf("\"%s\" is not a palindrome\n", argv[1]);

    return 0;
}

int palindrome(char *s) 
{
    size_t len = strlen(s);

    for (int i = 0; i < len / 2; ++i)
        if (s[i] != s[len-i-1])
            return 0;
    return 1;
}
