#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <locale.h>

int main()
{
  _tsetlocale(LC_ALL, _T("portuguese_brazil"));
  int n, array[1000], c, d, t;

  printf("Mestrado em Ciência da Computação - UFJF.\n");
  printf("Trabalho de EAD - 2013.\n");
  printf("Paulo Alceu d´ Almeida Rezende.\n");
  printf("\n");

  printf("Digite a quantidade de elementos:\n");
  scanf("%d", &n);

  printf("Digite %d valores inteiros\n", n);

  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }

  for (c = 1 ; c <= n - 1; c++) {
    d = c;
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
      d--;
    }
  }

  printf("O vetor ordenado fica: [");
  for (c = 0; c <= n - 1; c++) {
    printf("%d,", array[c]);
  }
  printf("]");

  printf ("\nPrograma Executado com sucesso!\n");
  system("PAUSE");
  return EXIT_SUCCESS;
}
