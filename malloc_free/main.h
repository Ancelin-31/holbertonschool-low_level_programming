/**
 * header containing prototypes
 * concerning malloc and free
 */

#ifndef MAIN_H_
#define MAIN_H_

void _putchar(char);
int _strlen(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
