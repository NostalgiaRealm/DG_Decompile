/*
 * _grFinish@0 at 1800021a0
 * undefined __cdecl _grFinish@0(void)
 * Address ranges: 1800021a0-1800021f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFinish_0(void)

{
  longlong lVar1;
  
                    /* 0x21a0  35  _grFinish@0
                       0x21a0  135  grFinish */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x38))();
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0xa8))();
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

