#include "ants.h"

void generate_random(Ant* ant, int width, int height) {
   ant.x = random() % width;
   ant.y = random() % height;
}

void move_random(Ant* ant) {
    // Generate random between -1 and 1 (excluding the 0)
    ant.x +=(random() % 2) * 2 - 1;
    ant.y += (random() % 2) * 2 - 1;
}
