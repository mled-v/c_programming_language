#include <stdio.h>
#define YES 1
#define NO 0

int main(){
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            inword = NO;
        }
        else if (inword == NO) {
            inword = YES;
            ++nw;
        }
    }
printf("%d %d %d\n", nl, nw, nc);
}

/*How would you test the word count program? 

    - To test the word count program I would run the program and input various sentences and words to see if they are counted correctly. 
    - Some boundaries that may need to be put in place is to verify is certain characters are counted as words as well. There are instances
        of where numbers, symbols, etc may be counted as words when they are not. To fix this another case could be put into place to only count 
        ASCII values within a certain range to exclude and of the numbers, symbols, etc. 
*/