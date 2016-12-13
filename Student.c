#include <string.h>

/**
 * Convertir palabras de minúscula a mayúscula
 * @param str
 * @return str
 */
char* StrToUpper(char* str) {
    char* p;
    for (p = str ; *p ; ++p) *p = toupper(*p);
    return str;
}
