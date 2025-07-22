#include <stdio.h>

size_t strLen(const char *s)
{

	int count = 0;
	for(int i = 0 ; s[i] != '\0' ; i++)
		
		count++;
	
	return count;
}


int Palindrome(char str[]) {
    int length = strLen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[100];


    printf("Enter a string: ");
    scanf("%s", str);


    if (Palindrome(str))
        printf("Yes");
    else
        printf("No");

    return 0;
}
