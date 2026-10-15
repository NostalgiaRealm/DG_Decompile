/*
 * _grBufferClear@12 at 1800018c8
 * undefined __cdecl _grBufferClear@12(uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800018c8-18000193f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferClear_12(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *extraout_x10;
  
                    /* 0x18c8  8  _grBufferClear@12
                       0x18c8  108  grBufferClear */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    uVar1 = FUN_18000d3f8(*(longlong *)(lVar2 + 0x18),param_1);
    (**(code **)(*extraout_x10 + 0xd8))(extraout_x10,uVar1,param_2,param_3);
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

