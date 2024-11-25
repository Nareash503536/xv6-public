#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    printf(1, "Our first user program on XV6\n");
    printf(1, "The author born in %d\n", getyear());
    exit();
}
