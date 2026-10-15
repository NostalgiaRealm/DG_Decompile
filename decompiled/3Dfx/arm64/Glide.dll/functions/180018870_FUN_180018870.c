/*
 * FUN_180018870 at 180018870
 * undefined __cdecl FUN_180018870(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180018870-1800188e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018870(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *extraout_x10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    uVar1 = FUN_1800200d0(*(longlong *)(param_1 + 0x18),param_2);
    (**(code **)(*extraout_x10 + 0xb8))(extraout_x10,uVar1,param_3,param_4);
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

