#include <stdio.h>
float novo(s){
    s = s + 50 - s/10;
    return s;
}
int main(){
    float s;
    printf("Digite o sal�rio base: "); scanf("%f", &s);
    printf("Novo sal�rio: %f\n", novo(s));
    return 0;
}
