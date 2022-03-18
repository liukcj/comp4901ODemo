#include "stdio.h"

void vuln() {
    char buf[10];
    read(0, buf, 0xFF);
}

int main () {
    vuln();
}