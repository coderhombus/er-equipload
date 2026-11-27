# ER Equipload

SKSE plugin for Skyrim AE **1.6.1170 only**: inventory weight works like Elden Ring's equip
load, so only equipped items count towards carry weight and over-encumbrance.

### Build

Clone with `--recursive`, then:

```
xmake                                   # plugin -> Distr/SKSE/Plugins
xmake build er-equipload-tests && xmake run er-equipload-tests
xmake f --werror=y                      # optional: warnings as errors for src/
xmake project -k vsxmake                # optional: Visual Studio solution
```

On the first configure xmake writes `xmake-requires.lock`; commit it so package versions stay
pinned.
