// Q_35
/*
字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"
 */

#include <stdio.h> 
// #include <string.h>

#define USE_STRING 0

void StringReverse(char *s);

int main(void) 
{
    char src_str[] = "www.runoob.com";

    StringReverse(src_str);
    printf("The reverse string is: %s", src_str);
    return 0;
}


void StringReverse(char *s) 
{
    int i;
    int s_length = 0;
    char temp;
#if USE_STRING == 1
    s_length = strlen((const char *)s);
#else
    char *p = s;
    while (*p != '\0') {
        p++;
        s_length++;
    }
#endif
    for (i=0; i<s_length/2; i++) {
        temp = s[i];
        s[i] = s[s_length-1-i];
        s[s_length-1-i] = temp;
    }


}
