#include <string.h>
#include <stdlib.h>
#include <string.h>

struct s_ant {
    const char* representation = '*';
    int x, y;
}

typedef struct s_ant Ant;

void generate_random(Ant*, int, int);
void move_random(Ant*);
