/*
 * _grSstIdle@0 at 180001e88
 * undefined __cdecl _grSstIdle@0(void)
 * Address ranges: 180001e88-180001ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstIdle_0(void)

{
  longlong lVar1;
  
                    /* 0x1e88  67  _grSstIdle@0
                       0x1e88  224  grSstIdle */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0xa0))();
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

