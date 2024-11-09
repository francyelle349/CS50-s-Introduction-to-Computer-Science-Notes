// Fun fact: In ASCII, the decimal values for uppercase and lowercase letters differ by 32. 
// Adding or subtracting 32 from a letter's ASCII code toggles its case.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string s = get_string("before:");
    printf("After:");
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - 32);
        }
        else{
            printf("%c", s[i]);
        }

    }
    printf("\n");
}
