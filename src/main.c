#include <stdio.h>
#include "kv.h"
#include <assert.h>
#include <string.h>

int main(void) {


kv_t *db = kv_init(16);
assert(db != NULL);
assert(db->capacity == 16);
assert(db->count == 0);
kv_free(db);

// valgrind should report 0 bytes in use at exit
   
return 0;
}


