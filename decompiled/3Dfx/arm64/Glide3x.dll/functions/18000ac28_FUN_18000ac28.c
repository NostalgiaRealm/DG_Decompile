/*
 * FUN_18000ac28 at 18000ac28
 * undefined __cdecl FUN_18000ac28(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18000ac28-18000ac9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ac28(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *extraout_x10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    uVar1 = FUN_18000d3f8(*(longlong *)(param_1 + 0x18),param_2);
    (**(code **)(*extraout_x10 + 0xd8))(extraout_x10,uVar1,param_3,param_4);
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

