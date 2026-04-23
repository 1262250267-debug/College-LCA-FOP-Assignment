#include <stdio.h>
#include <string.h>


int str_length(char str[]) {
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}


void str_reverse(char str[], char rev[]) {
    int len = str_length(str);
    for(int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}


int is_palindrome(char str[]) {
    int len = str_length(str);
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}


int is_substring(char str[], char sub[]) {
    int i, j;
    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i + j] != sub[j])
                break;
        }
        if(sub[j] == '\0')
            return 1;
    }
    return 0;
}

int main() {
    char str1[100], str2[100], rev[100], sub[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    
    printf("\nLength of string = %d\n", str_length(str1));

    
    str_reverse(str1, rev);
    printf("Reversed string = %s\n", rev);

    
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    
    if(is_palindrome(str1))
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");

    
    printf("\nEnter substring to check: ");
    scanf("%s", sub);

    if(is_substring(str1, sub))
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}
