#include <stdio.h>
#include <time.h>

int main() {
    // 1. Criamos uma variável para armazenar o tempo bruto (segundos desde 1970)
    time_t tempo_bruto = time(NULL);

    // 2. Convertemos para uma estrutura que separa dia, mês e ANO
    struct tm *data_atual = localtime(&tempo_bruto);

    // 3. O ano na struct tm conta a partir de 1900, então somamos 1900
    int ano = data_atual->tm_year + 1900;

    printf("Estamos no ano de: %d\n", ano);

    return 0;
}
