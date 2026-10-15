/*
 * _grSstResetPerfStats@0 at 1800024d0
 * undefined __cdecl _grSstResetPerfStats@0(void)
 * Address ranges: 1800024d0-180002517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstResetPerfStats_0(void)

{
  longlong lVar1;
  
                    /* 0x24d0  73  _grSstResetPerfStats@0
                       0x24d0  230  grSstResetPerfStats */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1e0))();
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

