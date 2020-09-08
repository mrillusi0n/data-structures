#include "array_operations.h"

void test_print_arr() {
    int scores[] = {8, 9, 7};

    print_arr(scores, 3);
    print_arr(scores, 0);
    print_arr(scores, 1);
}

int main(int argc, char const *argv[])
{
    test_print_arr();

    return 0;
}
