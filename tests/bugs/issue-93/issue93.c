#include "issue93.h"

void mutate_foo(foo_t *foo, bar_t *bar) {
    foo->bar = *bar;
}
