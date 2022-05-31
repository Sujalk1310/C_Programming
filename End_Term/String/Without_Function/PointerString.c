#include <stdio.h>
int main() {
    char *arg[]={"ab","cd","ef","gh","ij","kl"};
    char **P;
    char *t;
    P = arg;
    t = (P+sizeof(int))[-1];
    printf("%s",t);
    return 0; 
}