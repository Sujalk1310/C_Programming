#include <stdio.h>
#include <string.h> // ---> gets() or puts()
void main() { // String[] = {"Hi"} ---> Automatically assigns the size.
    char String[12]={"Hello World"}; // {'H','e','l','l','o'};
    printf("%s",String);
    scanf("%s",String);
    printf("%s",String);
    // Learn about scanf(%[^\n]) ---> it will take whole string as input 
    // or scanf(%[^k]) ---> it will take input until it gets first input.
    gets(String);
    puts(String); // it will not work in HackerRank, we use fgets() instead...
    // Functions in <string.h> (String Functions) => 
    // 1.strlen() ---> Strings length (It will not count NULL Character)
    // 2.strrev() ---> Reverse the string
    // 3.strcpy() ---> Copy the string
    // 4.strcat() ---> Concatenate Strings
    // 5.strupr() ---> Changes to UpperCase
    // 6.strlwr() ---> Changes to LowerCase
    // 7.strcmp() ---> Compare 2 Strings (Returns in 3 value [equal ==> 0,smaller ==> -,greater ==> +])
    // scanset ---> scanf("[^\n]",a); 

}