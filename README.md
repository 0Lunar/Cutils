# Cutils

**Cutils** è una libreria di utility in C che fornisce una serie di funzioni per facilitare operazioni comuni su stringhe, numeri e altre manipolazioni di basso livello. Questa libreria ha l'obiettivo di rendere il codice C più leggibile e riutilizzabile, centralizzando operazioni frequentemente utilizzate in un unico set di funzioni.

## Installazione

### Prerequisiti

Per usare questa libreria, è necessario avere un compilatore C compatibile con lo standard C99 (o superiore).

### Compilazione

1. Copia la cartella `include/` e i file nella cartella `source/` nel tuo progetto.
2. Includi il file header `cutils.h` nel tuo codice:

```c
#include "cutils.h"
```

3. Compila il tuo codice includendo i file `source/strutils.c` e `source/intutils.c`:

```sh
gcc -o my_program my_program.c -Llib -lcutils
```