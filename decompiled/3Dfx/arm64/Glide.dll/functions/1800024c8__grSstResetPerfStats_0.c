/*
 * _grSstResetPerfStats@0 at 1800024c8
 * undefined __cdecl _grSstResetPerfStats@0(void)
 * Address ranges: 1800024c8-18000250f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstResetPerfStats_0(void)

{
  longlong lVar1;
  
                    /* 0x24c8  79  _grSstResetPerfStats@0
                       0x24c8  240  grSstResetPerfStats */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1e0))();
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

