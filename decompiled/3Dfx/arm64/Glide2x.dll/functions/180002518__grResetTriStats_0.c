/*
 * _grResetTriStats@0 at 180002518
 * undefined __cdecl _grResetTriStats@0(void)
 * Address ranges: 180002518-18000255f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grResetTriStats_0(void)

{
  longlong lVar1;
  
                    /* 0x2518  61  _grResetTriStats@0
                       0x2518  218  grResetTriStats */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1e8))();
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

