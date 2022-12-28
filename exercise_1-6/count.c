#include <stdio.h>

int main() {

int c, nl, blank, tab;

nl = 0;
blank = 0;
tab = 0;

while((c=getchar()) != EOF) {
    if (c == '\n'){
        ++nl;
    }
    if (c == ' ') {
        ++blank;
    }
    if (c == '\t') {
        ++tab;
    }
}
printf("\nThe amount of new lines are:%d\nThe amount of tabs are:%d\nThe amount of blanks are:%d\n", nl,tab,blank);
}