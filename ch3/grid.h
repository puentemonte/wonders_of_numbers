#include <stdio.h>
#include <string.h>

#define ANT_COUNT 100
#define WIDTH 400
#define HEIGHT 400

struct s_grid {
    int steps;
    struct Ant ants[ANT_COUNT];
}

typedef struct s_grid Grid;

Grid* generate_grid(void);
void draw_grid(Grid*);
