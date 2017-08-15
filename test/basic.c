#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

static void test_append(void **);

int main(void) {
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_append)
	};

	cmocka_run_group_tests(tests, NULL, NULL);
	return 0;
}

/* A test case for the feed_append func */
static void test_append(void **state) {
	(void) state;
}
