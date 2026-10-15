/*
 * FUN_180017b68 at 180017b68
 * undefined __cdecl FUN_180017b68(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180017b68-180017bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017b68(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *extraout_x10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    uVar1 = FUN_18001f280(*(longlong *)(param_1 + 0x18),param_2);
    (**(code **)(*extraout_x10 + 0xb8))(extraout_x10,uVar1,param_3,param_4);
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

