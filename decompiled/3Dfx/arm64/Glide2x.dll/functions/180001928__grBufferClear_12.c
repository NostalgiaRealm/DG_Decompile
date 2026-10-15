/*
 * _grBufferClear@12 at 180001928
 * undefined __cdecl _grBufferClear@12(uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 180001928-18000199f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferClear_12(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x1928  15  _grBufferClear@12
                       0x1928  172  grBufferClear */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    uVar1 = FUN_18001f280(*(longlong *)(lVar2 + 0x18),param_1);
    (**(code **)(*extraout_x10 + 0xb8))(extraout_x10,uVar1,param_2,param_3);
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

