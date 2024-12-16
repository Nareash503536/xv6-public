#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    printf(1, "Kernel start address is %p bytes.\n", getkernelstartaddr());
    printf(1, "Kernel end address is %p bytes.\n", getkernelendaddr());
    printf(1, "Kernel variable address is %p bytes.\n", getkernelvariaddr());
    printf(1, "System call address is %p bytes.\n", getsystemcalladdr());
    exit();
}
