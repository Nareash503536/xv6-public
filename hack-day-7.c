#include "types.h"
#include "stat.h"
#include "user.h"

#define NUM_STRUCTS 10

struct mystruct {
    int pid;
    char name[16];
    uint sz;
    int priority;
};

int main(void) {

    struct mystruct struct_array[NUM_STRUCTS];
    struct mystruct *p;

    int return_val = mycall( NUM_STRUCTS*sizeof(struct mystruct), &struct_array);
    p = &struct_array[0];

    while(p != &struct_array[NUM_STRUCTS]){
        printf(1,"%d %s %d %d\n",p->pid, p->name, p->sz, p->priority);
        p++;
    }

    printf(1, "Program %d \n", return_val);
    exit();
}
