#include <stdio.h>
#include "minunit.h"
#include "calc.c"

int tests_run = 0;

static char * test_basic_add() {
    int inputs[] = {2, 3, 4};
    int answer = add(inputs);

    mu_assert("2+3+4=9", answer == 9);
    return 0;
}

static char * test_add_with_group() {
    int inputs[] = {2, 2, (12 * 4)};
    int answer = add(inputs);
    // printf("%d\n", answer);
    mu_assert("2+2-4=52", answer == 52);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_basic_add);
    mu_run_test(test_add_with_group);
    return 0;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != 0) {
        printf("Failed:");
        printf("%s\n", result);

    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}
