/*
 * _grFlush@0 at 1800021f8
 * undefined __cdecl _grFlush@0(void)
 * Address ranges: 1800021f8-18000223f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFlush_0(void)

{
  longlong lVar1;
  
                    /* 0x21f8  36  _grFlush@0
                       0x21f8  136  grFlush */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x38))();
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

