// Unit-test entry point. Run with `xmake run er-equipload-tests` (see tests/README.md).
#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest/doctest.h>

int main(int argc, char** argv)
{
    doctest::Context context(argc, argv);
    return context.run();
}
