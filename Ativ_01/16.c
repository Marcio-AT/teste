#include <stdio.h>
float novo(s){
      s = s + s*5/100;
      s = s - s*7/100;
      return s;
}
int main(){
    int s;
    printf("Digite o sal�rio base: "), scanf("%f", &s);
    printf("O novo sal�rio � %f\n", novo(s));
    return 0;
}
