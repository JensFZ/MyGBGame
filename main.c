#include <gb/gb.h>
#include <stdio.h>

void main() {
    printf("Hello World");
    while(1) {
        wait_vbl_done();
    }
}