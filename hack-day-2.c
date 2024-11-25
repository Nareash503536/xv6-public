#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    printf(1, "Size of the address space is %d bytes.\n", getmysize());
    exit();
}
