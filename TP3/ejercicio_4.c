#include <stdio.h>

int main() {
  int num = 0;
  int total = 0;
  int ciclos = 30;
  // 1 a 10
  int grupo_1 = 0;
  int suma_1 = 0;
  float porcentaje_1 = 0.0;
  // 10 a 20
  int grupo_2 = 0;
  int suma_2 = 0;
  float porcentaje_2 = 0.0;
  // 20 a 30
  int grupo_3 = 0;
  int suma_3 = 0;
  float porcentaje_3 = 0.0;
  // <30
  int grupo_4 = 0;
  int suma_4 = 0;
  float porcentaje_4 = 0.0;

  for (int i = 0; i < ciclos; i++) {
    printf("Ingrese un número(%d)", i + 1);
    scanf("%d", &num);

    if (num >= 1 && num <= 10) {
      grupo_1++;
      suma_1 += num;
    } else if (num >= 10 && num <= 20) {
      grupo_2++;
      suma_2 += num;
    } else if (num >= 20 && num <= 30) {
      grupo_3++;
      suma_3 += num;
    } else {
      grupo_4++;
      suma_4 += num;
    }
  }

  total = grupo_1 + grupo_2 + grupo_3 + grupo_4;

  porcentaje_1 = (grupo_1 * 100) / total;
  porcentaje_2 = (grupo_2 * 100) / total;
  porcentaje_3 = (grupo_3 * 100) / total;
  porcentaje_4 = (grupo_4 * 100) / total;

  printf("Promedio grupo 1: %.f, Promedio grupo 2: %.f, Promedio grupo 3: %.f, "
         "Promedio grupo 4: %.f",
         porcentaje_1, porcentaje_2, porcentaje_3, porcentaje_4);
}
