# Unit tests

Engine-independent tests (doctest) for the pure rules in `src/weight/rules.h` and the
configuration in `src/config/`. They do not include CommonLib, so they build with any C++23
compiler.

```
xmake build er-equipload-tests
xmake run er-equipload-tests                 # all tests
xmake run er-equipload-tests -tc="*Encumbered*"  # filter by test-case name
```

`rules-tests.cpp` pins the encumbrance decisions; changing an expected value there is a
gameplay change and needs a deliberate decision.
