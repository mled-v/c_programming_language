#include <stdio.h>

int main() {

int c;

while ((c = getchar()) != EOF) {
    if (c == '\t'){
        putchar('-');
        putchar('>');

    }
    if (c == '\b'){
        putchar('<');
        putchar('-');

    }
    putchar(c);
}
}

/*Not exactly sure if this the correct to implement this, not sure how to test if backspace case works properly*/