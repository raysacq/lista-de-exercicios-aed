#include <stdio.h>

typedef struct {
    float base;
    float altura;
} Retangulo;

float calcular_area(Retangulo r) { return r.base * r.altura; }
float calcular_perimetro(Retangulo r) { return 2 * (r.base + r.altura); }

int main(void) {
    Retangulo r;
    printf("Base: ");
    scanf("%f", &r.base);
    printf("Altura: ");
    scanf("%f", &r.altura);
    printf("Area: %.2f\nPerimetro: %.2f\n", calcular_area(r), calcular_perimetro(r));
    return 0;
}