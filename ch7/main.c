#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 4096

int main(int argc, char* argv[]) {
    
    if(argc != 2) {
        printf("Incorrect number of parameters given. Needed: 2. Given: %d\n", argc);
        return 0;
    }

    char seq[N];

    // Clean what's in seq just in case
    int i; char* p;
    for(i = 0, p = seq; i < N; ++i, ++p) {
        *p = 0;
    }

    seq[0] = '0';
    printf("Morse-Thue Sequence #%d: %s\n", 0, seq);

    i = 1;
    int j, k;
    while(i <= atoi(argv[1])) {
       for(j = 0; j < strlen(seq); j+=2) {
           for(k = strlen(seq) - 1; k > j; --k) {
               // Shift every bit of seq to the right
               seq[k+1]=seq[k];
           }
           if(seq[j] == '0') {
               seq[j+1]='1'; 
           }
           else {
               seq[j+1]='0';
           }
       }
       printf("Morse-Thue Sequence #%d: %s\n", i, seq);
       ++i;
    }


    return 0;
}
