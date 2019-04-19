#include "apue.h"

#define BUFFSIZE 4096

#include <stdio.h>

int main(int argc , char* argv) {
    int n;
    char buf[BUFFSIZE];
    
    while( (n = read(STDIN_FILENO, buf, BUFFSIZE) ) > 0) {
        if (write(STDOUT_FILENO, buf, n) != 0) {
            printf("write error");
            exit(1);
        }
    }
    if (n < 0) {
        printf("read error");
        exit(1);
    }
    exit(0);
}
