/*
 * _grBufferNumPending@0 at 1800019a0
 * undefined4 __cdecl _grBufferNumPending@0(void)
 * Address ranges: 1800019a0-1800019f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _grBufferNumPending_0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
                    /* 0x19a0  16  _grBufferNumPending@0
                       0x19a0  173  grBufferNumPending */
  lVar2 = FUN_180016878();
  uVar1 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 200))();
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return uVar1;
}

