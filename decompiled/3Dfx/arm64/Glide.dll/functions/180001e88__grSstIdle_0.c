/*
 * _grSstIdle@0 at 180001e88
 * undefined __cdecl _grSstIdle@0(void)
 * Address ranges: 180001e88-180001ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstIdle_0(void)

{
  longlong lVar1;
  
                    /* 0x1e88  71  _grSstIdle@0
                       0x1e88  232  grSstIdle */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0xa0))();
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

