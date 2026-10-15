/*
 * _grResetTriStats@0 at 180002510
 * undefined __cdecl _grResetTriStats@0(void)
 * Address ranges: 180002510-180002557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grResetTriStats_0(void)

{
  longlong lVar1;
  
                    /* 0x2510  66  _grResetTriStats@0
                       0x2510  227  grResetTriStats */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1e8))();
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

